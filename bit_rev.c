#include <stdio.h>

void reverse_bits( int a)
{ int d;
    for( int i=0; i <=31;i++)
    {   
        if(a>>i&1)
       {
          d |= 1<<31-i;
       }
}
 printf(" reversed version of ox%x is 0x%x\n", a, d);
}
int main() {
    // Write C code here
    printf("Try programiz.pro\n");
    int a = 0x12345678;
    reverse_bits(a);
    

    return 0;
}
