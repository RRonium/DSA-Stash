#include<iostream>
using namespace std;
class Addition
{
	private:
		int num;
	public:
		Addition(int n=0)		
		{
			num=n;
		}
	/*	Addition add(Addition a4) 
		{
			Addition temp;
			temp.num=num+a4.num;
			return temp;
		}*/
		Addition operator+(Addition a4) 
		{
			Addition temp;
			temp.num=num+a4.num;
			return temp;
		}
		Addition operator-(Addition a4) 
		{
			Addition temp;
			temp.num=a4.num-num;
			return temp;
		}
		void disp()
		{
			cout<<"Num:"<<num<<endl;
		}
};
int main()
{
	Addition a1(5);
	Addition a2(15);
	Addition a3;
	a1.disp();
	a2.disp();
	a3.disp();
	//a3=a1.add(a2);
	a3=a1-a2;
	a1.disp();
	a2.disp();
	a3.disp();
}
