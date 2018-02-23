#include <stdio.h>
#include<conio.h>
void main()
{
int x, y, temp;
scanf("%d%d", &x, &y);
printf("\nx = %d\ny = %d\n",x,y);
temp = x;
x    = y;
y    = temp;
printf("\nx = %d\ny = %d\n",x,y);
getch();
}
