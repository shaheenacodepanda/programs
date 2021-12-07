#include<stdio.h>
int main()
{
  int n,n1,rem,rev=0;
  printf("enter the num");
  scanf("%d",&n);
  n1=n;
  while(n>0)
  {
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }
  if(n1==rev)
    printf(" given num %d is palindrome\n",n1);
  else
      printf("given num %d is not palindrome\n",n1);
return 0;
  }
