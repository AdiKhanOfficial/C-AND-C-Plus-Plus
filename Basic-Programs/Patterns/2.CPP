#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
cout << "Enter No of Lines : ";
cin >> a;
for(b=a;b>=1;b--){
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
}
getch();
}