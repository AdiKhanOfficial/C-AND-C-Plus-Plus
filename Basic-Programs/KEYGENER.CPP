#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
clrscr();
int i;
FILE *file;
file = fopen("key_codes.txt","w+");
fprintf(file,"ALL CHARACTERS AND THEIR ASCII CODES");
for(i=0;i<256;i++){
printf("Writting > %c = %d",i,i);
fprintf(file,"\n %c = %d",i,i);
delay(50);
clrscr();
}
gotoxy(5,5);
printf("All Characters and Their ASCII Codes Have Been Generated!");
getch();
}