#include<iostream>
using namespace std;
class loops
{
	int num;
	int times;
	public:
		void display()
		{
			times=0;
			for( ; ; times = times + 1)
			{
				if(times>=10)
				{
					break;
				}
			
			cout<<endl<<"Enter a number:";
			cin>>num;
			cout<<endl<<num;
			}
		}
};
int main();
{
	loops L1;
	L1.display();
	return 01;
}
