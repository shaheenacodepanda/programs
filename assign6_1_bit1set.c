#include<stdio.h>

union bit_m
{
    unsigned int a;
};


int main() 
{
    
union bit_m u={0};
volatile union bit_m *ptr = (union bit_m*)&u;

ptr->a = 0x2000;
ptr->a |= 1<<1 | 1<<31;
printf("Resulting value: 0x%08x\n", ptr->a);
    return 0;
}
