#include<stdio.h>
#include <fstream>
#include<iostream>
using namespace std;
fstream fil,fil1;
class Student
{
	private:
		int RegNo;
		char Name[10];
		int size,rec,no;
	public:
		void accept();
		void display();
		void query();
		void query1();
		void modify();
		void del();
};
	Student s;
int main()
{
	int choice;
	char ch;
	do
	{
		cout<<"\nMain Menu";
		cout<<"\n1.Add";
		cout<<"\n2.Display";
		cout<<"\n3.Query on Registration Number";
		cout<<"\n4.Query on Record Number";
		cout<<"\n5.Modify";
		cout<<"\n6.Delete";
		cout<<"\n7.Quit";
		cout<<"\n\n\tEnter UR Choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				do
				{
					s.accept();
					cout<<"\nWant to Continue???";
					cin>>ch;
				 }while(ch=='y');
				 break;
			case 2:
				s.display();
				break;
			case 3:
				s.query();
				break;
			case 4:
				s.query1();
				break;
			case 5:
				s.modify();
				break;
			case 6:
				s.del();
				break;
			case 7:
				break;
			default:
				cout<<"\nNot a valid option";
		}
	}while(choice!=7);
 }
void Student::accept()
{
	fil.open("Student.txt",ios::app);
	cout<<"\nEnter the Reg No.:";
	cin>>RegNo;
	cout<<"\nEnter the Name:";
	cin>>Name;
	fil.seekp(0,ios::end);
	cout<<"Current pos:"<<fil.tellp();
	fil.write((char *)&s,sizeof(s));
	fil.close();
}
void Student::display()
{
	fil.open("Student.txt",ios::in);
	fil.seekg(0,ios::beg);
	fil.read((char *)&s,sizeof(s));
	while(!fil.eof())
	{
			cout<<"\nRegistration No.	:"<<RegNo;
			cout<<"\nName is                :"<<Name;
			fil.read((char *)&s,sizeof(s));
	}
	fil.close( );
}
void Student::query()
{
	int x,flag=0;
	fil.open("Student.txt",ios::in);
	cout<<"\nEnter Reg. No. U want to see:";
	cin>>x;
	while(!fil.eof())
	{
		fil.read((char *)&s,sizeof(Student));
		if(s.RegNo==x)
		{
			cout<<"\nUR Record is :";
			cout<<"\nRegistration No:"<<RegNo;
			cout<<"\nName is		:"<<Name<<endl;		
			break;
		}
		else if(fil.eof())
		{
			cout<<"Reg. No.:"<<x<<" not available in database"<<endl;
		}	
	}
	fil.close();
}
void Student::query1()
{
	fil.open("Student.txt",ios::in);
	fil.seekg(0,ios::end);
	size=fil.tellg();
	rec=size/sizeof(s);
	cout<<"\nSize is :"<<size;
	cout<<"\nThere are "<<rec<<" records";
	cout<<"\nEnter Record No. U want to see:";
	cin>>no;
	int seekpos=(no-1)*sizeof(Student);
	fil.seekg(seekpos,ios::beg);
	fil.read((char *)&s,sizeof(Student));
	cout<<"\nUR Record is :";
	cout<<"\nRegistration No:"<<RegNo;
	cout<<"\nName is		:"<<Name;		
	fil.close();
}
void Student::modify ()
{
	char ch;
	fil.open("Student.txt",ios::in|ios::out);
	cout<<"Enter the Registration No. to be searched:";
	cin>>no;
	long seekpos=(no-1)*sizeof(Student);
	fil.seekg(seekpos,ios::beg);
	fil.read((char *)&s,sizeof(Student));
	cout<<"Reg No 	:"<<RegNo;
	cout<<"\nName is:"<<Name;
	cout<<"\nWant to modify???";
	cin>>ch;
	if(ch=='y')
	{
		cout<<"\nEnter the Reg No.:";
		cin>>s.RegNo;
		cout<<"\nEnter the Name:";
		cin>>s.Name;
		seekpos=fil.tellg()-sizeof(s);
		fil.seekp(seekpos,ios::beg);
		fil.write((char*)&s,sizeof(s));
		fil.seekg(seekpos,ios::beg);
		fil.read((char*)&s,sizeof(s));
		cout<<"\nModified Record:";
		cout<<"\nReg No	:"<<s.RegNo;
		cout<<"\nName is:"<<s.Name;
	}
	fil.close();
}
void Student::del()
{
	int x,flag=0;
	fil.open("Student.txt",ios::in);
	fil1.open("temp.txt",ios::out|ios::app);
	cout<<"\nEnter Registration Number U want to DELETE:";
	cin>>x;
	while(!fil.eof())
	{
		fil.read((char *)&s,sizeof(Student));
		if(s.RegNo==x)
		{
			cout<<"\nUR Record is :";
			cout<<"\nRegistration No:"<<RegNo;
			cout<<"\nName is		:"<<Name<<endl;		
			cout<<"...............Deleting............."<<endl;
			
		}
		else 
		{
			fil1.write((char *)&s,sizeof(Student));
		}	
	}
	fil.close();
	fil1.close();
	remove("student.txt");
	rename("temp.txt","student.txt");
}
