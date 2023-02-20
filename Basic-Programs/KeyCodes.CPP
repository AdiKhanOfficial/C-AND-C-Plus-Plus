#include<stdio.h>
#include<conio.h>
void main(){
int i;
FILE *file;
file = fopen("key_codes.txt","w+");
fprintf(file,"ALL CHARACTERS AND THEIR ASCII CODES");
for(i=0;i<256;i++){
fprintf(file,"\n %c = %d",i,i);
}
printf("All Characters and Their ASCII Codes Have Been Generated!");
getch();
}