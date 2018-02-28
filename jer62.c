#include <stdio.h>
#include<conio.h>
#include<string.h>
void main(void)
{
char s[10];
scanf("%s",s);
int i,flag=0,m;
m=strlen(s);
for(i=0;i<m;i++)
{
if(s[i]=='1' || s[i]=='0')
{
flag=1;
}
else
{
flag=0;
break;
}
}
if(flag==1)
{
printf("yes");
}
else{
printf("no");
}
}
getch();
}
