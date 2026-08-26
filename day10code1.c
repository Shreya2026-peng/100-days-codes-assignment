//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>
int main()
{
  int a,b,c;
printf("enter the three sides:")
  scanf("%d %d %d", &a,&b,&c);
if (a==b && b==c)
  print("equilateral\n");
else if (a==b || b==c || a==c)
  printf("isosceles\n");
else
  printf("scalene\n")
    return 0;
}
