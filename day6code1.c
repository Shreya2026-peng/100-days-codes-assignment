//Q11: Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
  int a;
printf("enter the integer:");
scanf("%d",&a);
if (a%2==0)
  printf("%d is an even number.\n",a);
else
  printf("%d is an odd number.\n",a);
return 0;
}
