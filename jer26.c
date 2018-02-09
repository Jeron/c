#include <stdio.h>
#include<conio.h>
void main()
{
int sec, h, m;
printf("Input minutes: ");
scanf("%d", &min);
h = (sec/3600); 
m = (sec -(3600*h))/60;
printf("H:M - %d:%d\n",h,m);
getch();
}
