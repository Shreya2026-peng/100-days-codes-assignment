//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
  int TotalSeconds, hours, minutes,seconds;
printf("enter time in seconds:");
scanf("%d",&TotalSeconds);
hours = TotalSeconds/3600;
minutes = (TotalSeconds%3600)/60;
seconds = TotalSeconds%60;
printf("hours = %d\n",hours);
printf("minutes = %d\n",minutes);
printf("seconds = %d\n",seconds);
return 0;
}
