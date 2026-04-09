#include <iostream>
using namespace std;
class overload
{
	public:
		int max(int, int);
		float max(float, float);
};
int overload::max(int num1, int num2)
{
	if(num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
float overload::max(float num1, float num2)
{
	if(num1 > num2)
	{
		return num1;
	}
	else
	{
		return num2;
	}
}
int main()
{
	overload o1;
	cout<<o1.max(5.4F,8.6F)<<endl;
	cout<<o1.max(19,12)<<endl;
	return 0;
}
