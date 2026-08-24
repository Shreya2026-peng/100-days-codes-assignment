//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
int main()
{
  float p,r,si,amount,ci;
int t,i;
printf("enter principal:");
scanf("%f",&p);
printf("enter rate:");
scanf("%f",&r);
printf("enter time:");
scanf("%d",&t);
si = (p*r*t)/100;
amount = p;
for (i=1, i<=t,i++)
{
amount = amount*(1+r/100);
}
ci = amount-p;
printf("simple interest = %.2f\n",si);
printf("compound interest = %.2d\n",ci);
