//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>
int main()
{
  int a,b;
char op;
printf("enter two numbers and an operator:");
  scanf("%d %d %c",&a,&b,&op);
switch (op)
{
case '+':
printf("%d\n",a+b);
break;
case '-':
printf("%d\n",a-b);
break;
case '*':
printf("%d\n",a*b);
break;
case '/':
if (b!=0)
  printf("%d\n",a/b);
else
  printf("can't divide by zero\n");
break;
case '%':
if (b!=0)
  printf("%d\n",a%b);
else
  printf("can't divide by zero\n");
default:
printf("invalid operator\n");
}
return 0;
}
