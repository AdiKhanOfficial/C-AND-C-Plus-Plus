#include<iostream.h>
#include<conio.h>
#include<string.h>
void main(){
clrscr();
int i,j,p,first,last;
cout<<"Enter first No : ";
cin >>first;
cout<<"Enter last No : ";
cin >>last;
for(i=first;i<=last;i++){
p=1;
for(j=2;j<i;j++){
if(i%j == 0){
p=0;
}
}
if(p==1){
cout<<i <<", ";
}
}
getch();
}