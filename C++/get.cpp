#include<iostream>
using namespace std;
int main()
{
	char str1[10],str2[10];
	cout<<"Enter First String:";
	//cin>>str1;
	//cin.get(str1,10,'n');
	cin.getline(str1,10,'n');
	cout<<"Enter Second String:";
	cin>>str2;
	cout<<"First:"<<str1<<endl;
	cout<<"Second:"<<str2<<endl;
}
