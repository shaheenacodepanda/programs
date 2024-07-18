// Online C compiler to run C program online
#include <stdio.h>

void clrbit(int b)
{
    b = b & ~(1<<0);
    printf("%d", b);
}

void clr2bit(int b)
{
    b = b & ~(3<<0);
    printf("%d\n", b);
}
void clr3bit(int b)
{
    b = b & ~(7<<0);
    printf("%d\n", b);
}
void clr4bit(int b)
{
    b = b & ~(0xf<<0);
    printf("%d\n", b);
}
void clrcons0bit(int b)
{
    b = b & ~(0xAAAA<<0);
    printf("%d\n", b);
}
void clrcons1bit(int b)
{
    b = b & ~(0x5555<<0);
    printf("%d\n", b);
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    clr4bit(0xf);
    clrcons1bit(0xf);
    return 0;
}
