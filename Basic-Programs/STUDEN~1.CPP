#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
class student
{
private:
int roll_no;
char name[30];
char address[50];
int marks[6];

public:
void main_menu();
void add();
void findStudent();
void allStudents();
void edit();
int check(int);
void modify(int);
void delete_rec(int);
};

void student::main_menu()
{
int choice;
while(choice!=5)
{
clrscr();
cout<<"\n\t\t\t\t*************";
cout<<"\n\t\t\t\t* MAIN MENU *";
cout<<"\n\t\t\t\t*************";
cout<<"\n\n\n\t\t\t1.Add Student Record";
cout<<"\n\t\t\t2.All Students Record";
cout<<"\n\t\t\t3.Find Student";
cout<<"\n\t\t\t4.Edit Record";
cout<<"\n\t\t\t5.Exit";
cout<<"\n\n\t\t\tEnter Your Choice: ";
cin>>choice;

switch(choice)
{
case 1: add();
break;
case 2: allStudents();
break;
case 3: findStudent();
break;
case 4: edit();
break;
case 5: break;
default:
{
cout<<"\n\n\t\t\tWrong choice.....!!!";
cout<<"\n\t\t\tPress any key to continue....!!";
getch();
}
}
}
}

void student::add()
{
clrscr();
int r,flag,i;
char subjects[6][30]={"Math","Urdu","English","C++","ITC","Islamic Study "};
ofstream fout("Record.dat",ios::app);

cout<<"\n Enter Student Details";
cout<<"\n ----------------------";
cout<<"\n\n Roll No: ";
cin>>r;
flag=check(r);

if(flag)
cout<<"\n Sorry..!!!Roll No already Exist";

else
{
roll_no=r;
cout<<" Name: ";
gets(name);
cout<<" Address: ";
gets(address);
cout<<"\nEnter Marks Details";
cout<<"\n--------------------\n";
for(i=0;i<6;i++){
	cout<<subjects[i]<<" : ";
	cin>>marks[i];
}
fout.write((char*)this,sizeof(student));
cout<<"\n Record Saved...!!!";
}

cout<<"\n Press any key to continue.....!!";
getch();
fout.close();
}

void student::findStudent()
{
clrscr();
ifstream fin("Record.dat",ios::in);
int r,flag,i;
float obtained,per;
char subjects[6][30]={"Math","Urdu","English","C++","ITC","Islamic Study"};
cout<<"\n Enter Roll No: ";
cin>>r;

while(!fin.eof())
{
fin.read((char*)this,sizeof(student));
if(roll_no==r)
{
clrscr();
cout<<"\n Student Details";
cout<<"\n ----------------";
cout<<"\n\n Roll No : "<<roll_no;
cout<<"\n Name : "<<name;
cout<<"\n Address : "<<address;
cout<<"\n Marks Detail";
cout<<"\n-------------\n";
for(i=0;i<6;i++){
	cout<<"\n"<<subjects[i]<<" : "<<marks[i];
	obtained+=marks[i];
}
cout<<"\nObtained Marks : "<<obtained;
cout<<"\nTotal Marks : 600";
per=obtained*100/600;
cout<<"\nPercentage : "<<per;
flag=1;
break;
}
}

if(flag==0)
cout<<"\n Sorry No Record Found....!";

cout<<"\n\n Press any key to continue....!!";
getch();
fin.close();

}

void student::allStudents()
{
int rpt;
clrscr();
ifstream fin("Record.dat",ios::in);
cout<<"\n\t\t\t List Of All Students";
cout<<"\n\t\t\t ----------------------";
cout<<"\n\n Roll No.\tName\t\t\tAddress\n";

while(!fin.eof())
{
fin.read((char*)this,sizeof(student));
if(rpt!=roll_no && roll_no>0){
cout<<"\n\n "<<roll_no<<"\t\t"<<name<<"\t\t"<<address;
rpt=roll_no;
}
}
cout<<"\n\n\n\t\t\tPress any key to continue.....!!";
getch();
fin.close();
}

void student::edit()
{
clrscr();
int choice,r;

cout<<"\n EDIT MENU";
cout<<"\n ---------";
cout<<"\n\n 1.Modify Student Record";
cout<<"\n 2.Delete Student Record";
cout<<"\n Enter your choice: ";
cin>>choice;
clrscr();
cout<<"\n Enter Roll No: " ;
cin>>r;

switch(choice)
{
case 1: modify(r);
break;
case 2: delete_rec(r);
break;
default: cout<<"\n Wrong Choice.....!!";
}
cout<<"\n Press any key to continue....!!!";
getch();
}

int student::check(int r)
{
int flag=0;
ifstream fin("Record.dat",ios::in);
while(!fin.eof())
{
fin.read((char*)this,sizeof(student));
if(roll_no==r)
{
flag=1;
break;
}
}

fin.close();
return(flag);
}

void student::modify(int r)
{
long pos,flag=0;
char subjects[6][30]={"Math","Urdu","English","C++","ITC","Islamic Study"} ;
int i;
fstream file("Record.dat",ios::in|ios::out|ios::binary);
while(!file.eof())
{
pos=file.tellg();
file.read((char*)this,sizeof(student));
if(roll_no==r)
{
cout<<"\n Enter New Details";
cout<<"\n -----------------";
cout<<"\n Name: ";
gets(name);
cout<<" Address: ";
gets(address);
cout<<"\nEnter Marks Details";
cout<<"\n--------------------\n";
for(i=0;i<6;i++){
	cout<<subjects[i]<<" : ";
	cin>>marks[i];
}
file.seekg(pos);
file.write((char*)this,sizeof(student));
cout<<"\n Record is modified....!!";
flag=1;
break;
}
}

if(flag==0)
cout<<"\n Sorry No Record Found...!!";
file.close();
}

void student::delete_rec(int r)
{
int flag=0;
char ch;
ifstream fin("Record.dat",ios::in);
ofstream fout("temp.dat",ios::out);
while(!fin.eof())
{
fin.read((char*)this,sizeof(student));
if(roll_no==r)
{
cout<<"\n Name: "<<name;
cout<<"\n Address: "<<address;
cout<<"\n\n Do you want to delete this record(y/n): ";
cin>>ch;

if(ch=='n')
fout.write((char*)this,sizeof(student));
flag=1;
}
else
fout.write((char*)this,sizeof(student));
}

fin.close();
fout.close();
if(flag==0)
cout<<"\n Sorry No Record Found...!!";
else
{
remove("Record.dat");
rename("temp.dat","Record.dat");
}
}

void main()
{
student std;
clrscr();
cout<<"\n\t\t\t*******************************";
cout<<"\n\t\t\t*      STUDENTS PORTAL        *";
cout<<"\n\t\t\t*******************************";
cout<<"\n\n\n\n\t\tDeveloped By : ";
sleep(1);
cout<<"ADIL KHAN";
sleep(1);
cout<<"\n\n\n\n\n\n\n\t\tPress any key to continue....!!";
getch();
std.main_menu();
}