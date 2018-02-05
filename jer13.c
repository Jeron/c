#include <stdio.h>
#include<conio.h>
void main()
{
int low, high, i, j;
printf("Enter two numbers(intervals): ");
scanf("%d %d", &low, &high);
printf("Prime numbers between %d and %d are: ", low, high);
while (low < high)
{
j = 0;
for(i = 2; i <= low/2; ++i)
{
if(low % i == 0)
{
j = 1;
break;
}
}
if (j == 0)
printf("%d ", low);
++low;
}
getch();
}
