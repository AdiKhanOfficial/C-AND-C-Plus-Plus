#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(void)
{
clrscr();
int a,b,c;
float x1,x2;
textcolor(YELLOW + RED);
cprintf("\n\n   Quardatic Formula");
printf("\n Enter Value Of a:");
scanf("%d",&a);
printf("\n Enter Value Of b:");
scanf("%d",&b);
printf("\n Enter Value Of c:");
scanf("%d",&c);
x1=(-b-(sqrt(b*b-4*a*c)))/2*a;
x2=(-b+(sqrt(b*b-4*a*c)))/2*a;
textcolor(RED);
cprintf("\nValue of x=%f or %f",x1,x2);
getch();
}
