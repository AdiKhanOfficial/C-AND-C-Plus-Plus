#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n1,n2,n3,n4,n5;
float avg;
textcolor(RED + BLUE);
gotoxy(4,4);
printf("Average Finder");
printf("\nEnter First Number:");
scanf("%d",&n1);
printf("\nEnter Second Number:");
scanf("%d",&n2);
printf("\nEnter Third Number:");
scanf("%d",&n3);
printf("\nEnter Fourth Number:");
scanf("%d",&n4);
printf("\nEnter Fifth Number:");
scanf("%d",&n5);
avg=(n1+n2+n3+n4+n5)/5;
textcolor(BLUE + YELLOW);
cprintf("\nAvarage (%d+%d+%d+%d+%d)/5=%f",n1,n2,n3,n4,n5,avg);
getch();
}