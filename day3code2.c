//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main()
{
  int a,b,c;
printf("enter two numbers:");
scanf("%d %d",&a,&b);
printf("before swapping: a = %d, b = %d\n",a,b);
c=a;
a=b;
b=c;
printf("after swapping: a=%d, b=%d\n",a,b);
return 0;
}
