#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	ifstream o("STR.txt");
	char str[30];
	//o>>str;
	o.get(str,31);
	cout<<"str:"<<str<<endl;
	
}
