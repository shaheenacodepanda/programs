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

int set_bits_count( int a)
{ int count =0;
    for( int i=0 ; i <=31 ; i++)
    {
        if(a>>i &1)
        {
            count = count +1;
        }
    }
    printf("set bit count in %x is %d\n", a, count);
}

int main() {
    unsigned int x;
    printf("Enter an integer: ");
    scanf("%x", &x);
    unsigned int msb = extractMSB(x);
    printf("Most Significant Bit (MSB): %u\n", msb);
    unsigned int lsb = extractLSB(x);
    printf("Most Significant Bit (LSB): %u\n", lsb);
    set_bits_count(x);

    return 0;
}
