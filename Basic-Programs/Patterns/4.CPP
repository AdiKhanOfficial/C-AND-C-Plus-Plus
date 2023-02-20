#include<iostream.h>
#include<conio.h>
void main(){
int a,b,c,line=2;
clrscr();
cout << "Enter No of Lines : ";
cin >> a;
for(b=a;b>=1;b--){
gotoxy((a-b +1)*2,(a-b+1)+1);
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
line++;
}
getch();
}