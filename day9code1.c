//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
int main()
{
  float a,b,c,d;
float root1,root2,sqrtD=0;
int i;
printf("enter a,b,c:");
scanf("%f %f %f",&a,&b,&c);
D=b*b-4*a*c;
if (D>0)
{
for (i=0; i*i<=D; i++)
  sqrtD = i;
root1 = (-b+sqrtD)/(2*a);
root2 = (-b-sqrtD)/(2*a);
printf("roots are real and distinct.\n");
printf("root 1 = %.2f\n",root1);
printf("root 2 = %.2f\n",root2);
}
else if (D==0)
{
root1 = -b/(2*a);
printf("roots are real and equal.\n");
printf("root 1 = root 2 = %.2f\n",root1);
}
else
{
printf("roots are imaginary.\n");
}
return 0;
}
