#include<stdio.h>


int main() 
{
    
int a = 0x0;
a |= 3<<2;
printf("Resulting value: 0x%08x\n", a);
a |= 0xa<<4;
printf("Resulting value: 0x%08x\n", a);
return 0;
}
