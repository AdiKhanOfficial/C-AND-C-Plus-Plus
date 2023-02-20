#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
cout << "Enter No Of Lines : ";
cin >> a;
for(b=1;b<=a;b++){
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
}
getch();
}