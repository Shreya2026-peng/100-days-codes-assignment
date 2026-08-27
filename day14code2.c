//Q28: Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>
int main()
{
int n,i,sum=0;
printf("enter n:");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
sum = sum +(2*i);
}
printf("sum = %d\n",sum);
return 0;
}
