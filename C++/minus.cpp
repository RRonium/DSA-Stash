#include<iostream>
using namespace std;
class Number
{
	private:
		int num;
	public:
		Number(int);
		void disp();
		void operator-();
};
Number::Number(int n=0)
{
	num=n;
}
void Number::disp()
{
	cout<<"Value is:"<<num<<endl;
}
void Number:: operator-()
{
	num=-num;
}
int main()
{
	Number n1(-5);
	n1.disp();
	-n1;
	n1.disp();
}
