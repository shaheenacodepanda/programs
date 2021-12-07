#include<stdio.h>
int fact(int n)
{if(n<=1)
	return 1;
else
	return(n*fact(n-1));
}

int main()

{
printf("enter the num");
int x,n;
scanf("%d",&n);
x=fact(n);
printf("factorial of the given num %d is %d ",n,fact(n));
return 0;

}
