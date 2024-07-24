#include <stdio.h>

int main() {
    unsigned int value = 0x231;  // Initial value

    // Extract the lowest byte of the integer using bitwise operations
    unsigned char byte0 = value & 0xFF;

    // Check if the lowest byte is 0x31 to determine endianness
    if (byte0 == 0x31) {
        printf("Processor is Little Endian.\n");
    } else {
        printf("Processor is Big Endian.\n");
    }

    return 0;
}
