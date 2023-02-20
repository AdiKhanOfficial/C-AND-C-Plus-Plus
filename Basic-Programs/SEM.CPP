#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int v,t,a;
float s;
gotoxy(4,4);
textcolor(RED);
cprintf("2nd Equation Of Motion");
printf("\n\n Enter Vilocity v:");
scanf("%d",&v);
printf("\n Enter Accelration a:");
scanf("%d",&a);
printf("\n Enter Time t:");
scanf("%d",&t);
s=v*t+0.5*a*t*t;
textcolor(GREEN);
cprintf("\n Distance=%f",s);
getch();
}