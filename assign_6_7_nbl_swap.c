#include <stdio.h>

int swap_nibbles(int a, int nibble_pos1, int nibble_data1, int nibble_pos2, int nibble_data2) {
    // Mask to isolate 4 bits (a nibble)
    int mask = (1 << 4) - 1;

    // Clear the bits at the specified positions and set them to the new data
    a = (a & ~(mask << (nibble_pos1 * 4))) | (nibble_data2 << (nibble_pos1 * 4));
    a = (a & ~(mask << (nibble_pos2 * 4))) | (nibble_data1 << (nibble_pos2 * 4));

    return a;
}

int main() {
    int a = 0x12345678;
    printf("Original value: 0x%08x\n", a);

    int nibble_pos1, nibble_data1, nibble_pos2, nibble_data2;
    printf("Enter nibble position1 (0-7):\n");
    scanf("%d", &nibble_pos1);

    printf("Enter nibble data1 (0x0-0xF):\n");
    scanf("%x", &nibble_data1);

    printf("Enter nibble position2 (0-7):\n");
    scanf("%d", &nibble_pos2);

    printf("Enter nibble data2 (0x0-0xF):\n");
    scanf("%x", &nibble_data2);

    int output = swap_nibbles(a, nibble_pos1, nibble_data1, nibble_pos2, nibble_data2);
    printf("Resulting value: 0x%08x\n", output);

    return 0;
}
