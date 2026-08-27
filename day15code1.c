//Q29: Write a program to calculate the factorial of a number.

#include <stdio.h>
int main()
{
int n,i;
int fact = 1;
printf("enter a number:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
fact = fact*i;
}
printf("factorial = %d\n",fact);
return 0;
}


