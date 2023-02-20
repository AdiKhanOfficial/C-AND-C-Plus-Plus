#include<iostream.h>
#include<conio.h>
void main(){
clrscr();
int array[10];

int i,j;
for(i=0;i<10;i++){
cout<<"Enter No "<<i+1<<": ";
cin>>array[i];
}
for(i=0;i<10;i++){
	for(j=0;j<10;j++){
		if(array[j]>array[i]){
		array[i] = array[i]+array[j];
		array[j] = array[i]-array[j];
		array[i] = array[i]-array[j];
		}
	}
}
for(i=0;i<10;i++){
cout<<array[i]<<" ";
}
getch();
}
