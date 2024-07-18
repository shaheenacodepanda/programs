// Online C compiler to run C program online
#include <stdio.h>

void setbit(int b)
{
    b = b | (1<<0);
    printf("%d", b);
}

void set2bit(int b)
{
    b = b | (3<<0);
    printf("%d\n", b);
}
void set3bit(int b)
{
    b = b | (7<<0);
    printf("%d\n", b);
}
void set4bit(int b)
{
    b = b | (0xf<<0);
    printf("%d\n", b);
}
void setcons0bit(int b)
{
    b = b | (0xAAAA<<0);
    printf("%d\n", b);
}
void setcons1bit(int b)
{
    b = b | (0x5555<<0);
    printf("%d\n", b);
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    set4bit(16);
    setcons1bit(0);
    return 0;
}
