#include<iostream>
using namespace std;
class employee
{
	private:
		int salary;
	public:
		employee(int);
		void disp();
		int operator>(employee);
};
employee::employee(int s)
{
	salary=s;
}
void employee::disp()
{
	cout<<"Salary:"<<salary<<endl;
}
int employee::operator>(employee ee)
{
	if(salary>ee.salary)
	{
		return 1; 
	}
	else
	{
		return 0;
	}
}
int main()
{
	employee e1(10000);
	employee e2(19000);
	if(e1>e2)
	{
		cout<<"First Employee earns more ";
	}
	else
	{
		cout<<"Second Employee earns more ";
	}
}
