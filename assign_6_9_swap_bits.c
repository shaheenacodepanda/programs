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
void swap_bits(int a)
{   
    printf(" Swapping EVEN and ODD bits");
    printf(" Before swapping 0x%x\n", a);
    print_bits(a);
    a = (a & 0x55555555)<<1 | (a & 0xAAAAAAAA)>>1;
    printf(" After swapping 0x%x\n", a);
    print_bits(a);
}
int main() {
    int a=0x55555555;
    swap_bits(a);
    return 0;
}
