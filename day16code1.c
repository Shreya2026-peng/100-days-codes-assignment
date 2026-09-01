//Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>
int main()
{
int n, digit, binary = 0, place = 1;
printf("enter a number:");
scanf("%d",&n);
while (n>0)
{
digit = n%2;
binary = binary+digit*place;
place = place*10;
n = n/2;
}
printf("%d\n",binary);
return 0;
}
