
//Using the format specifier 0x%016lx ensures that the hexadecimal output is always 16 characters long, padded with zeros if necessary. This is useful for displaying long integers in a consistent format.
//hx for reading short int hexadecimal
//x for intx gexadecimal
//16lx 0x04x
// %hhx is used to read an unsigned char in hexadecimal format
#include <stdio.h>

void swap2bits(int x)
{
    int c = ((x & 0x3) << 2 | (x & 0xc) >> 2);
    printf("After swapping 2bits: 0x%01x\n", c);
}
void swapnibble(int x)
{
    int c = ((x & 0x0F) << 4 | (x & 0xF0) >> 4);
    printf("After swapping nibbles: 0x%02x\n", c);
}

void swapbyte(int x)
{
    int d = ((x & 0x00FF) << 8 | (x & 0xFF00) >> 8);
    printf("After swapping bytes: 0x%04x\n", d);
}

void swapword(int x)
{
    int d = ((x & 0x0000FFFF) << 16 | (x & 0xFFFF0000) >> 16);
    printf("After swapping words: 0x%08x\n", d);
}

int main() {
    int x;
    printf("Enter a byte (0-255) in hexadecimal (e.g., 0x78): ");
    scanf("%x", &x); 

    printf("Original byte: 0x%04x\n", x);
    swapnibble(x);
    swapbyte(x);
    swapword(x);
    swap2bits(x);
    return 0;
}
