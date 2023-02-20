#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main(){
	clrscr();
	char *str;
	int i,words=0,flag=0;
	cout<<"Type a String : ";
	gets(str);
	for(i=0;i<strlen(str);i++){
		if(int(str[i]) !=32 ){
			if(flag == 0){
				flag=1;
				words+=1;	
			}
		}
		else{
			flag=0;
		}
	}
	cout<<"\nYou Have Entered "<<words<<" words";
	getch();
}
