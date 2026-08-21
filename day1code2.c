//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
  int main()
{
  int a,b;
int sum,diff,product,quotient;
printf("enter the two integers:");
scanf("%d %d",&a,&b);
sum = a+b;
diff = a-b;
product = a*b;
quotient = a/b;
printf("sum = %d\n",sum);
printf("diff = %d\n",diff);
printf("product = %d\n",product);
printf("quotient = %d\n",quotient);
return 0;
}
