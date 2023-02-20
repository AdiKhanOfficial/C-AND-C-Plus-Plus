#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,num;
char prime='y';
printf("\nEnter a number:");
scanf("%d",&num);
for(x=2;x<num;x++)
{
if(num%x==0)
{
prime='N';
}
}
if(prime=='N')
printf("\n%d is not a prime number",num);
else
printf("%d is a prime number",num);
getch();
}