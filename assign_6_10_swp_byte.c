// Online C compiler to run C program online
#include <stdio.h>

void print_bits(int a)
{
    for( int i=31 ; i >=0; i--)
    {
        printf("%d", a>>i&1);
    }
    printf("\n");
}
void swap_byte(int a)
{   printf(" Before swapping byte 0x%x\n", a);
    print_bits(a);
    a = (a & 0x00FF)<<8 | (a & 0xFF00)>>8;
    printf(" After swapping first byte 0x%x\n", a);
    print_bits(a);
}
int main() {
    int a=0x55AA;
    swap_byte(a);
    return 0;
}
