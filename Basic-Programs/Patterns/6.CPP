#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main(){
int a,b,c,line=2,speed=1000;
clrscr();
cout << "Enter No of Lines : ";
cin >> a;
while(1){
//section 1
clrscr();
cout <<endl;
for(b=1;b<=a;b++){
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
}
cout << "\n \n Speed is = " <<speed*4 <<"ms";
delay(speed);

//section 2
clrscr();
cout <<endl;
for(b=a;b>=1;b--){
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
}
cout << "\n \n Speed is = " <<speed*4 <<"ms";
delay(speed);

//section 3
clrscr();
for(b=a;b>=1;b--){
gotoxy((a-b +1)*2,(a-b+1)+1);
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
line++;
}
cout << "\n \n Speed is = " <<speed*4 <<"ms";
delay(speed);

//section 4
clrscr();
for(b=1;b<=a;b++){
gotoxy((a-b +1)*2,b+1);
for(c=1;c<=b;c++){
cout << c << " ";
}
cout << endl;
line++;
}
cout << "\n \n Speed is = " <<speed*4 <<"ms";
delay(speed);
if(speed > 100){
	speed -= 50;
}


}
getch();
}