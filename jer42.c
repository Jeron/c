#include<stdio.h>
#include<conio.h>
void main()
{
int num, min, max;
printf("Enter an integer\n");
scanf("%d", &num);
printf("Enter the minimum and maximum range\n");
scanf("%d %d", &min, &max);
if((num-min)*(num-max) <= 00
{
printf("%d is in range of [%d, %d]", num, min, max);
} 
else 
{
printf("%d is not in range of [%d, %d]", num, min, max);
}
getch();
}
