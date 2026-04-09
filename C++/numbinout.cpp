#include <fstream>
#include<iostream>
using namespace std;
int main()
{
	int num=100;
	int num1=50;
	ofstream o("Numinp.txt");
	o.write((char*)&num,sizeof(num));
	o.write((char*)&num1,4);
	cout<<"Completed";
}
