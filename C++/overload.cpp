#include <iostream>
using namespace std;
class Addition
{
	public:
	void add(int,int);
	void add(float,float)	;
	//int add();
	void add();
	void add(int,float);
	void add(float,int);
};
void Addition::add(int n1,int n2)
{
	cout<<"Sum of Integers:"<<(n1+n2)<<endl;
}
void Addition::add(float n1,float n2)
{
	cout<<"Sum of Floats:"<<(n1+n2)<<endl;
}
void Addition::add()
{
	cout<<"What to Add?"<<endl;
}
int main()
{
	Addition a1;
	//a1.add(5.6f,10.9f);
	//a1.add(5,10);
	a1.add();
}
