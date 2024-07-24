#include <stdio.h>

int main() {
    int i=100;
    printf("Printing 100 to 1 without using for loop: \n");
    decrement:
        printf("%d\n",i);
        i=i-1;
        if(i>=1)
        {
            goto decrement;
        }

    return 0;
}
