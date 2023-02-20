#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c,line=2;
clrscr();
cout << "Enter No of Lines : ";
cin >> a;
for(b=1;b<=a;b++){
gotoxy((a-b +1)*2,b+1);
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
line++;
}
getch();
}