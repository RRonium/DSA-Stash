#include<iostream>
using namespace std;
class Number
{
	private:
		int num;
	public:
		Number(int);
		void disp();
		Number operator++();
		Number operator++(int);
};
Number::Number(int n=0)
{
	num=n;
}
void Number::disp()
{
	cout<<"Value is:"<<num<<endl;
}
Number Number:: operator++()
{
	Number temp;
	num=num+1;
	temp.num=num;
	return temp;
}
Number Number:: operator++(int)
{
	Number temp;
	temp.num=num;
	num=num+1;
	return temp;
}
int main()
{
	Number n1(5);
	Number n2;
	n1.disp();
	n2.disp();
	//n2=++n1;
	n2=n1++;
	n1.disp();
	n2.disp();
}
a=5;
b=-a;
