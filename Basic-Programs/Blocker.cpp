/* Copyright Protected by mycfiles.com
C Program to Block any website on computer */
#include<DOS.h>
#include<DIR.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
char ip[12];
FILE *target;

int rootfinder(void);
void siteblocker(char *);
void main()
{
Start:
clrscr();
char name[40];
int success=0;
printf("Enter The IP Address :");
scanf("%s",&ip);
printf("Enter The web site name to be block :");
scanf("%s",&name);
success=rootfinder();
if(success)
siteblocker(name);
printf("%s is blocked",name);
printf("\nEnter 1 for more : ");
int re;
scanf("%d",&re);
if(re == 1){
goto Start;
}
else {
int i;
printf("\nClosing");
for(i=0; i<7;i++){
printf(".");
delay(500);
}
}
}

int rootfinder()
{
int done;
struct ffblk ffblk;//File block structure

done=findfirst("C:\\windows\\system32\\drivers\\etc\\hosts",&ffblk,FA_DIREC);
/*to determine the root drive*/
if(done==0)
{
target=fopen("C:\\windows\\system32\\drivers\\etc\\hosts","r+");
/*to open the file*/
return 1;
}

else return 0;
}

void siteblocker(char *na)
{


int i;
fseek(target,0,SEEK_END); /*to move to the end of the file*/

fprintf(target,"\n");
fprintf(target,"%s\t\t\t%s\n",ip,na);
fclose(target);
}
