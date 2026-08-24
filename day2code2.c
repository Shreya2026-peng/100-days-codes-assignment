//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
int main()
{
  float radius,area,circumference;
printf("enter the radius of circle:");
scanf("%f",&radius);
area = 3.14*radius*radius;
circumference = 2*3.14*radius;
printf("area of a circle = %.2f\n",area);
printf("circumference of a circle = %.2f\n",circumference);
return 0;
}
