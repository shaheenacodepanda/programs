#include <stdio.h>
void byte_toggle(int a)
{ 
 printf("   0x%08x After Toggling is 0x%08x\n",a,~a);
}

int main() {
    int a =24;   
    byte_toggle(a);
    return 0;
}
