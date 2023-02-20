#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
int a,b,c,r;
float result;
clrscr();
gotoxy(4,2);
printf("\n 1. Multiply");
printf("\n 2. Divid");
printf("\n 3 .Add");
printf("\n 4 .Subtract");
printf("\n Enter Your Choice:");
scanf("%d",&r);
switch(r)
{
case 1:
	printf("\n Enter First Number:");
	scanf("%d",&a);
	printf("\n Enter Second Number:");
	scanf("%d",&b);
	c=a*b;
	printf("\n Result=%d",c);
	break;
case 2:
	printf("\n Enter First Number;");
	scanf("%d",&a);
	printf("\n Enter Second Number:");
	scanf("%d",&b);
	c=a/b;
	printf("\n Result=%d",c);
	break;
case 3:
	printf("\n Enter First Number:");
	scanf("%d",&a);
	printf("\n Enter Second Number:");
	scanf("%d",&b);
	c=a+b;
	printf("\n Result=%d",c);
	break;
case 4:
	printf("\n Enter First Number:");
	scanf("%d",&a);
	printf("\n Enter Second Number:");
	scanf("%d",&b);
	c=a-b;
	printf("\n Result=%d",c);
	break;
defult:
	printf("\n Invalid Choice");
	}
	getch();
	}
