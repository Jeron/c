#include<stdio.h>
int main()
{
int n,rem,rem1,sum;
clrscr();
printf("\n enter the number:");
scanf("%d",&n);
rem=n%10;
rem1=n/10;
sum=rem+rem1;
printf("/n sum is:%d",sum);
return 0;
}
