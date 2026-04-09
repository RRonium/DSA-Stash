#include<iostream>
#include<string.h>
using namespace std;
class Student
{
	private:
		int RegNo;
		char Name[10];
		char Course[15];
		int Fees;
	public:
		Student()
		{
			RegNo=5;
			strcpy(Name,"Anurag");
			strcpy(Course,"GNIIT");
			Fees=55000;
		}
		void accept();
		void accept(int R,char N[],char C[],int F);
		void display()
		{
			cout<<"Display Details"<<endl;
			cout<<"==============="<<endl;
			cout<<"Registration No.:"<<RegNo<<endl;
			cout<<"Student Name:"<<Name<<endl;
			cout<<"Course Enrolled:"<<Course<<endl;
			cout<<"Program Fees:"<<Fees<<endl;

		}
		~Student()
		{
			cout<<"\n Object is Dead\n";
		}
};
//Score Resolution operator
void Student::accept()
{
			cout<<"Accept Details"<<endl;
			RegNo=100;
			strcpy(Name,"Ram");
			strcpy(Course,"C++");
			Fees=5000;
}
void Student::accept(int R,char N[],char C[],int F)
{
			cout<<"Accept2  Details"<<endl;
			RegNo=R;
			strcpy(Name,N);
			strcpy(Course,C);
			Fees=F;
}

int main()
{
	Student ram;
	Student shyam;
	Student s1;
//	ram.accept();
//	shyam.accept(1,"Sannidhya","Prog C++",5000);
	ram.display();
	shyam.display();
}
