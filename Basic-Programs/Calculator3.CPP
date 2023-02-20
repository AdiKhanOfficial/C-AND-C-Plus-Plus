
#include<stdio.h>
#include<conio.h>
void main()
{
a:
clrscr();
int x,y;
char op;
gotoxy(10,3);
printf("Simple Calculator(By Adil Khan)\n      ");
gotoxy(10,5);
scanf("%d%c%d",&x,&op,&y);
switch(op)
{
case '+':
printf("         = %d",x+y);
break;
case '-':
printf("         = %d",x-y);
break;
case '/':
printf("         = %d",x/y);
break;
case '*':
printf("         = %d",x*y);
break;
}
getch();
goto a;
}