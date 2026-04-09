#include<iostream>
using namespace std;
class AClass
{
	public:
		void disp()
		{
			cout<<"disp() In AClass"<<endl;
		}
};
class BClass
{
	public:
		void disp()
		{
			cout<<"disp() In BClass"<<endl;
		}
};
class CClass:public AClass,public BClass
{
	public:
		void disp()
		{
			AClass::disp();
			BClass::disp();
		}
	
};
int main()
{
	CClass c;
	c.disp();
}
