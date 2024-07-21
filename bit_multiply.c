// Online C compiler to run C program online
#include <stdio.h>

void bit_multiply( int a, int b)
{ int d=0;
   
    for( int i=0; i < b ;i++)
    {   
       d = d+a;
    }
 printf(" Multiplication of ox%x and  0x%x is 0x%x\n", a,b,d);
}

int main() {
    int a =2;
    int b=12;
    bit_multiply(a,b);
    return 0;
}
