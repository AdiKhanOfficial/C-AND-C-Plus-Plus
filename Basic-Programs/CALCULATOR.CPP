#include<stdio.h>
#include<conio.h>
#include<math.h>
#define x "\nEnter First Number:"
#define y "\nEnter Secont Number:"
void main(void)
{
int a,b,c,r,choise,pass;
float result;
b:
clrscr();
printf("\n Enter Your Password:");
scanf("%d",&pass);
if(pass==12345)
{
printf("\nPassword Accepted\nPress Any Key To Continue");
getch();
}
else
{
printf("\n You Have Entered Wrong Password");
getch();
goto b;
}
a:
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
	printf(x);
	scanf("%d",&a);
	printf(y);
	scanf("%d",&b);
	c=a*b;
	printf("\n Result=%d",c);
	break;
case 2:
	printf(x);
	scanf("%d",&a);
	printf(y);
	scanf("%d",&b);
	c=a/b;
	printf("\n Result=%d",c);
	break;
case 3:
	printf(x);
	scanf("%d",&a);
	printf(y);
	scanf("%d",&b);
	c=a+b;
	printf("\n Result=%d",c);
	break;
case 4:
	printf(x);
	scanf("%d",&a);
	printf(y);
	scanf("%d",&b);
	c=a-b;
	printf("\n Result=%d",c);
	break;
default:
	printf("\n Invalid Choice");
	}
	printf("\nPress 1 To Do Again:");
	scanf("%d",&choise);
	if(choise==1)
	goto a;
	else
	{
	printf("\nPress Enter To Exit");
	getch();
	}
	}
