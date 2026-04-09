#include<iostream>
using namespace std;
class Employee
{
	public:
	virtual	void disp()=0;
	
};
class Trainee:public Employee
{
	public:
	/*	void disp()
		{
			cout<<"Salary of Trainee";
		}*/
};
class Confirmed:public Employee
{
	public:
		void disp()
		{
			cout<<"Salary of Confirmed";
		}
};
int main()
{
//	Employee tt;
	Employee *e;
	e=new Trainee;
	e->disp();
	e=new Confirmed;
	e->disp();
}
