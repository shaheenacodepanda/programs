// Online C compiler to run C program online
#include <stdio.h>

void togbit(int b)
{
    b = b ^ (1<<0);
    printf("%d", b);
}

void tog2bit(int b)
{
    b = b ^ (3<<0);
    printf("%d\n", b);
}
void tog3bit(int b)
{
    b = b ^ (7<<0);
    printf("%d\n", b);
}
void tog4bit(int b)
{
    b = b ^ (0xf<<0);
    printf("%d\n", b);
}
void togcons0bit(int b)
{
    b = b ^ (0xAAAA<<0);
    printf("%d\n", b);
}
void togcons1bit(int b)
{
    b = b ^ (0x5555<<0);
    printf("%d\n", b);
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    tog4bit(0x5);
    togcons1bit(0xf);
    return 0;
}
