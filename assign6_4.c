#include<stdio.h>


int main() 
{
    
int a = 0x4000;
a |= 0<<0;
printf("Resulting value original: 0x%08x\n",a);
if(!(a>>2&1))
{
   a = 0x5678;
    printf("Resulting value: 0x%08x\n", a);
    
}
return 0;
}
