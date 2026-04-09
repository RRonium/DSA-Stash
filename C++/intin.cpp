#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream o("Abc.txt");
	int a,b,c;
	o>>a>>b>>c;
	cout<<"a:"<<a<<endl;
	cout<<"b:"<<b<<endl;
	cout<<"c:"<<c<<endl;
	
}
