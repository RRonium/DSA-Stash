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
class BClass:virtual public AClass
{

};
class CClass:virtual public AClass
{

};
class DClass:public BClass,public CClass
{

};
int main()
{
	DClass d;
//	d.BClass::disp();
d.disp();
}
