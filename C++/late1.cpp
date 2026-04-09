#include<iostream>
using namespace std;
class Employee
{
	public:
		void disp()
		{
			cout<<"Salary of Employees";
		}
};
class Trainee:public Employee
{
	public:
		void disp()
		{
			cout<<"Salary of Trainee";
		}
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
	Employee *e;
	e=new Trainee;
	e->disp();
	e=new Confirmed;
	e->disp();
}
