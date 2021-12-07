#include<stdio.h>
int shah()
    {printf(" PLEASE! enter a num between 1 to 9\n");
    int num;
    scanf("%d",&num);
    return(num);
    }

int main()
{
int n;
n=shah();

while(!((n<=9)&(n>=1)))
  {  printf("ERROR:::the number you entered is out of range\n");
     n=shah();
}
printf("ALRIGHT!!:enter the number u entered is %d\n",n);
return 0;
}

