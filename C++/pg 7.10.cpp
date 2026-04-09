#include<iostream>
using namespace std;
void swap(int num1,int num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
	cout << num1 << " " << num2 <<endl;
}
int main()
{
		int number1=10, number2=20;
	cout<<"Before Call:"<<number1<<"\t"<<number2<<endl;
	swap(number1,number2);
		cout<<"After Call:"<<number1<<"\t"<<number2<<endl;
	return 0;
}
