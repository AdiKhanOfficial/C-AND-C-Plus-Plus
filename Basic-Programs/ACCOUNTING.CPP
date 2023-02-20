#include<conio.h>
#include<stdio.h>
#include<iostream.h>
void main(){
long double num,esum,isum,prof=0,tprof=0;
start:
clrscr();
cout<<"*****************\n* MY CALCULATOR *\n*****************"<<endl<<endl;
num=1;
esum=0;
while(num != 0){
cout<<"E > ";
cin>>num;
esum+=num;
}
cout<<"\nTotal Expendidure = "<<esum<<endl<<endl;
income:
num=1;
isum = 0;
while(num != 0){
cout<<"I > ";
cin>>num;
isum+=num;
}
cout<<"\nTotal Total Income = "<<isum<<endl<<endl;
prof = isum - esum;
cout<<"Profit = "<<prof<<endl<<endl;
confirm:
int con;
cout<<"Enter 1(Contineou) 2(Expenses) 3(Income)";
cin>>con;
if(con == 2) goto start;
else if(con == 3) goto income;
else if(con == 1) goto subtotal;
else goto confirm;
subtotal:
tprof+=prof;
cout<<"\nTotal Profit = "<<tprof;
getch();
goto start;

}