#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c,d,line=2;
clrscr();
cout << "Enter No of Lines : ";
cin >> a;
for(b=1;b<=a;b++){
gotoxy((a*2+2)-(2*b),line);
for(c=1;c<=b;c++){
cout << c << " ";
}
for(d=b-1;d>0;d--){
cout <<d << " ";
}
line++;
}
getch();
}