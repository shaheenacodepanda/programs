#include<stdio.h>
int main()
{ float p,si,r;
int t;

printf("enter principle amount,rate per annum and time");
scanf("%f%f%d",&p,&r,&t);
si=(p*t*r)/100;
printf("principle amount=%.2f\n",p);
printf("rate per annum=%.2f\n",r);
printf("time=%d years\n",t);
printf("simple interest=%.2f\n",si);
}
