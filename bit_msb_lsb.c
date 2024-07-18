#include <stdio.h>

unsigned int extractMSB(unsigned int x) {
    // Assuming 32-bit integer
    unsigned int msb = (x >> 31) & 1;
    return msb;
}

unsigned int extractLSB(unsigned int x) {
    // Assuming 32-bit integer
    unsigned int lsb = (x & 1);
    return lsb;
}

int main() {
    unsigned int x;
    printf("Enter an integer: ");
    scanf("%u", &x);
    unsigned int msb = extractMSB(x);
    printf("Most Significant Bit (MSB): %u\n", msb);
    unsigned int lsb = extractLSB(x);
    printf("Most Significant Bit (LSB): %u\n", lsb);

    return 0;
}
