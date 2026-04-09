#include<iostream>
using namespace std;
class MyInt 
{
	private:
		int a;
		int b;
		public:
			void operator-();
			void accept(int,int);
			void print();
};
void MyInt::operator -()
{
	a=-a;
	b=-b;
}
void MyInt::accept(int x, int y)
{
	a=x;
	b=y;
}
void MyInt::print()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
int main()
{
	MyInt il;
	il.accept(15, -25);
	il.print();
	-il;
	il.print();
	return 0;
}
