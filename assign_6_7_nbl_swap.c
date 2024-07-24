#include <stdio.h>

int swap_nibbles(int a, int nibble_pos1, int nibble_data1, int nibble_pos2, int nibble_data2) {   
    int mask = (1 << 4) - 1;
    
    a = (a & ~(mask << (nibble_pos1 * 4)) | (nibble_data2 << (nibble_pos1 * 4)));
    a = (a & ~(mask << (nibble_pos2 * 4)) | (nibble_data1 << (nibble_pos2 * 4)));
  
    return a;
}

int main() {
    int a = 0x12345678;
    printf("Resulting value original: 0x%08x\n", a);

    int nibble_pos1, nibble_data1, nibble_pos2, nibble_data2;
    printf("Enter nibble position1\n");
    scanf("%d", &nibble_pos1);

    printf("Enter nibble data1\n");
    scanf("%x", &nibble_data1);

    printf("Enter nibble position2\n");
    scanf("%d", &nibble_pos2);

    printf("Enter nibble data2\n");
    scanf("%x", &nibble_data2);

    int output;
    volatile int *address = (int *)&output;

    // Write data to the address
    *address = swap_nibbles(a, nibble_pos1, nibble_data1, nibble_pos2, nibble_data2);
    // Optionally, read back and print to verify
    printf("Data written to address (0x80000000) 0x%08x: 0x%08x\n", &address, *address);

    return 0;
}
