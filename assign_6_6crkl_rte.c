#include <stdio.h>

int main() {
    int a = 0x12345678;
    printf("Original value: 0x%08x\n", a);

    int nibble_pos, nibble_data;
    printf("Enter nibble position (0-7):\n");
    scanf("%d", &nibble_pos);
    printf("Enter nibble data (0x0-0xF):\n");
    scanf("%x", &nibble_data);

    int mask = (1 << 4) - 1;
    int output;

    // Modify the specified nibble
    a = (a & ~(mask << (nibble_pos * 4))) | (nibble_data << (nibble_pos * 4));
    printf("After modifying nibble: 0x%08x\n", a);

    // Perform a circular left shift by 4
    a = (a << 4) | (a >> (32 - 4));

    // Assign the result to output
    output = a;

    // Print the result
    printf("Result after circular left shift: 0x%08x\n", output);

    return 0;
}
