//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

#include <stdio.h>
  int main()
  {
float percentage;
printf("enter percentage:")
scanf("%d", &percentage);
if (percentage>=90 && percentage<= 100)
  print("grade A\n");
else if (percentage >= 80)
  printf("grade B\n");
else if (percentage >=70)
  printf("grade C\n");
else if (percentage >=60)
  printf("grade D\n");
else if (percentage >=0)
  printf("grade F\n);
else
    printf("invalid percentage\n")
    return 0;
}
