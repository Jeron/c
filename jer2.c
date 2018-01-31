#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k;
 printf("Enter the three different numbers");
 scanf("%lf %lf %lf",&i,&j,&k);
 if(i>j && i>k)
 {
 printf("i is the largest number");
 }
 else if(j>k && j>i)
 {
 printf("j is largest  number");
 }
 else
 {
 printf("k is largest number");
 }
 getch();
 }
 
