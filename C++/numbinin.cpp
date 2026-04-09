#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	int num,num1;
	ifstream o("Numinp.txt");
	o.read((char*)&num,sizeof(num));
	cout<<"Here is the data:"<<num;
		o.read((char*)&num1,4);
	cout<<"\nHere is the data:"<<num1;
}
