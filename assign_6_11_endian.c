// Online C compiler to run C program online
#include <stdio.h>

void endian_check(int a)
{   printf("Checking Endian of the processor through 0x%X\n\n", a);
   
     int ch = (char)a;
    if(ch == 0x34)
    {    printf("Processor is Little Endian:  Since first byte of  0x%X that is 0x%X  is located at Lower Address\n", a, ch);
    }
    else{
         printf("Processor is Big Endian : Since first byte of  0x%X that is 0x%X  is located at Higher Address\n", a, ch);
    }
}
int main() {
    int a=0x1234;
    endian_check(a);
    return 0;
}
