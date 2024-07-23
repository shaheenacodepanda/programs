// Online C compiler to run C program online
#include <stdio.h>
void set_group( int a, int start, int length)
{  printf(" Original hexadecimal 0x%x\n",a);
    int mask = ((1<<length)-1);
    a= (a & ~(mask<<start));
    a |= (mask<<start);
    printf("After set of group of bits 0x%x\n",a);
}
int main() {
    //int a = 0x1245 ;
    int a;
   printf("Enter the integer value\n");
    scanf("%x",&a);
    int start;
    printf("Enter the start value\n");
    scanf("%d",&start);
    int  length;
    printf("ENter the length\n");
    scanf("%d",&length);
    set_group(a, start, length);

    return 0;
}
