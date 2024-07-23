// Online C compiler to run C program online
#include <stdio.h>

struct Bitmanipulate
{
    unsigned int a0:1;
    unsigned int a1:1;
    unsigned int a2:1;
    unsigned int a3:1;
    unsigned int a4:1;
    unsigned int a5:1;
    unsigned int a6:1;
    unsigned int a7:1;
    unsigned int a8:1;
    unsigned int a9:1;
    unsigned int a10:1;
    unsigned int a11:1;
    unsigned int a12:1;
    unsigned int a13:1;
    unsigned int a14:1;
    unsigned int a15:1;
    unsigned int a16:1;
    unsigned int a17:1;
    unsigned int a18:1;
    unsigned int a19:1;
    unsigned int a20:1;
    unsigned int a21:1;
    unsigned int a22:1;
    unsigned int a23:1;
    unsigned int a24:1;
    unsigned int a25:1;
    unsigned int a26:1;
    unsigned int a27:1;
    unsigned int a28:1;
    unsigned int a29:1;
    unsigned int a30:1;
    unsigned int a31:1;  
};

union bit_m
{
    struct Bitmanipulate bits;
    unsigned int a;
};


int main() 
{
    
union bit_m u={0};
volatile union bit_m *ptr = (union bit_m*)&u;

ptr->a = 0x1000;
ptr->bits.a0= 0x1;
if( ptr->bits.a0 == 0x1)
{
    ptr->a = 0x1234;
}

printf("Resulting value: 0x%08x\n", ptr->a);
    return 0;
}
