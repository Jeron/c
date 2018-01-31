#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("Enter the character:");
scanf("%C",&c); 
if((c>='a' && c<='z'|| (c>='A' && c<='Z'))
printf("%c is alphabet",c);
else
printf("%c is not an alphabet",c);
getch();
}
