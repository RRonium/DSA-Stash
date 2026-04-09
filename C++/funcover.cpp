#include<iostream>
using namespace std;
class Addition
{
	public:
		void add()
		{
			cout<<"Nothing to add\n";
		}
		void add(int a,int b)
		{
			cout<<"Int Sum is:"<<(a+b)<<endl;
		}
			void add1(float a,float b)
		{
			cout<<"Float Sum is:"<<(a+b)<<endl;
		}
};
int main()
{
	Addition a1;
	a1.add(5,7);
}
