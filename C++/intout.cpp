#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	ofstream o("Abc.txt");
	cout<<"Enter value a"<<endl;
	cin>>a;
		cout<<"Enter value b"<<endl;
	cin>>b;
		cout<<"Enter value c"<<endl;
	cin>>c;
	d=(a+b+c);	
	o<<d;
}
