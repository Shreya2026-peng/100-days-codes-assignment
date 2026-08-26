//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>
int main()
{
  int CP,SP;
int profit,loss,percentage;
printf("enter cost price:");
scanf("%d",&CP);
printf("enter selling price:");
scanf("%d",&SP);
if (SP>CP)
{
profit = SP-CP;
percentage = (profit/CP)*100;
printf("profit = %d\n",percentage);
}
else if (CP>SP)
{
loss = CP-SP;
percentage = (loss*100)/CP;
printf("loss = %d\n",percentage);
}
else 
{
printf("no profit, no loss\n");
}
return 0;
}
