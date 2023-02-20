#include<DOS.h>
#include<DIR.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<iostream.h>

char ip[12]="127.0.0.1";
FILE *target;

int rootfinder(void);
void setdns(char *);
void main(int argc, char *argv[100])
{
clrscr();
int success=0;
success=rootfinder();
if(success)
if(argc == 1){
char website[100];
cout<<"Enter a website : ";
cin>>website;
setdns(website);
cout<<website <<" is registered!";
}
else{
setdns(argv[1]);
cout<<argv[1] <<" is registered!";
}
getch();
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

void setdns(char *na)
{
int i;
fseek(target,0,SEEK_END); /*to move to the end of the file*/
fprintf(target,"\n%s\t%s",ip,na);
fclose(target);
}