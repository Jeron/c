#include <stdio.h>
#include<conio.h>
void main(void) 
{
int n,m,prod;
scanf("%d %d",&n,&m);
prod=n*m;
if(prod%2==0)
{
printf("even");
}
else
printf("odd");
getch();
}
