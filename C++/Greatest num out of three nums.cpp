#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int num1, num2, num3;
	cout<<"enter num1;";
	cin>>num1;
	cout<<"enter num2;";
	cin>>num2;
	cout<<"enter num3;";
	cin>>num3;
	if((num1>num2)&&(num1>num3))
	{
		cout<<"num1 is greatest";
	}
	else if((num2>num1)&&(num2>num3))
	{
		cout<<"num2 is greatest";
	}
	else if((num3>num2)&&(num3>num1))
	{
		cout<<"num3 is greatest";
	}
	else
	{
		cout<<"Two or three numberc are equal or invalid";
	}
}
