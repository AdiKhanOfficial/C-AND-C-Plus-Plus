#include<stdio.h>
#include<conio.h>
void main(void)
{
clrscr();
textcolor(RED);
float mob,tot,per;
printf("Enter marks Obtained:");
scanf("%f",&mob);
printf("Enter Total Marks:");
scanf("%f",&tot);
per=mob/tot*100;
cprintf("Result=%f%",per);
if(per>=33.0,per<40.0)
{
printf("\nPASS\nGrade E");
}
else
{
cprintf("\nFAIL");
}
getch();
}