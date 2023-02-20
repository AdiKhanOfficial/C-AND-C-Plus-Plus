#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a1,a2,a3,a4,a5,m1,m2,m3,m4,m5,mt;
gotoxy(4,4);
printf("Answer These Questions");
printf("\nQ1: What is our country name?\n1.PAKISTAN	2.INDIA	       3.IRAN\n");
printf("Enter your choice:");
scanf("%d",&a1);
if(a1==1)
{
printf("\nCorrect");
m1=5;
}
else
{
printf("\nWrong");
m1=0;
}
printf("\nMarks=%d",m1);
getch();
clrscr();
printf("\n\nQ2: Who is the founder of Pakistan?\n1.ALAMA IQBAL	2.QUAID E AZAM	       3.LIAQAT ALI KHAN\n");
printf("Enter your choice:");
scanf("%d",&a2);
if(a2==2)
{
printf("\nCorrect");
m2=5;
}
else
{
printf("\nWrong");
m2=0;
}
printf("\nMarks=%d",m2);
getch();
clrscr();
printf("\n\nQ3: Which city is the capital of Pakistan?\n1.LAHORE	2.KARACHI	       3.ISLAMABAD\n");
printf("Enter your choice:");
scanf("%d",&a3);
if(a3==3)
{
printf("\nCorrect");
m3=5;
}
else
{
printf("\nWrong");
m3=0;
}
printf("\nMarks=%d",m3);
getch();
clrscr();
printf("\n\nQ4: Who is the last Prophet of Allah?\n1.HAZRAT MOSA(A.S)	2.HAZRAT MUHAMMAD(S.A.W.W)	       3.HAZRAT ABRAHIM(A.S)\n");
printf("Enter your choice:");
scanf("%d",&a4);
if(a4==2)
{
printf("\nCorrect");
m4=5;
}
else
{
printf("\nWrong");
m4=0;
}
printf("\nMarks=%d",m4);
getch();
clrscr();
printf("\n\nQ5: Which is the last Book of Allah?\n1.ZABOR	2.TORAT	       3.QURAN\n");
printf("Enter your choice:");
scanf("%d",&a5);
if(a5==3)
{
printf("\nCorrect");
m5=5;
}
else
{
printf("\nWrong");
m5=0;
}
printf("\nMarks=%d",m5);
getch();
clrscr();
mt=m1+m2+m3+m4+m5;
gotoxy(13,3);
printf("Test Completed");
gotoxy(8,8);
printf("Obtained Marks=%d",mt);
gotoxy(8,9);
printf("Total Marks   =25");
textcolor(GREEN);
gotoxy(10,10);
cprintf("Developed By Adil Khan");
getch();
}