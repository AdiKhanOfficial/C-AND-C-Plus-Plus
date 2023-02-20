#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int array[10];
int i,j,choice;
for(i=0;i<10;i++){
cout<<"Enter No "<<i+1<<": ";
cin>>array[i];
}
selection:
cout<<"Enter 1 for ASC and 2 for DES :";
cin>>choice;
switch(choice){
case 1:
for(i=0;i<10;i++){
for(j=0;j<10;j++){
if(array[j]>array[i]){
array[i] = array[i]+array[j];
array[j] = array[i]-array[j];
array[i] = array[i]-array[j];
}
}
}
break;
case 2:
for(i=0;i<10;i++){
for(j=0;j<10;j++){
if(array[j]<array[i]){
array[i] = array[i]+array[j];
array[j] = array[i]-array[j];
array[i] = array[i]-array[j];
}
}
}
break;
default:
cout<<"Invalid Selection!"<<endl;
goto selection;

}
for(i=0;i<10;i++){
cout<<array[i]<<" ";
}
getch();
}
