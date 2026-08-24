//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main()
{
  float celcius,fahrenheit;
printf("enter temp in celcius:");
scanf("%f",celcius);
fahrenheit = (celcius*9/5)+32;
printf("%.2f C is equal to %.2f F\n",celcius,fahrenheit);
return 0;
}
