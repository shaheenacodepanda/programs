#include<stdio.h>


int main() 
{
int a = 0x12345678;

printf("Resulting value original: 0x%08x\n",a);
//int *ptr = &(0x8000000);
//int *ptr2 = &ptr;
int nibble_pos, nibble_data;
printf("Enter nibble position\n");
scanf("%d",&nibble_pos);
printf("Enter nibble data\n");
scanf("%x",&nibble_data);
int mask = (1<<4)-1;
//printf("%x\n", mask);
int output;
volatile int *address = (int *)&output;


a = (a & ~(mask<<(nibble_pos*4)) | (nibble_data<<(nibble_pos*4)));
printf("%x\n",a);
    // Write data to the address
    a= a<<4 | a>>32-4;
    *address = a;
    // Optionally, read back and print to verify
    printf("Data written to address (0x80000000) 0x%08x: 0x%08x\n",&address, *address);

//printf("%x\n", nibble_data<<(nibble_pos*4));
//printf("%x\n", a & ~(mask<<(nibble_pos*4)));
return 0;
}
