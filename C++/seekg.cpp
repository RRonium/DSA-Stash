#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
	char ch;
	for(int i=0;i<3;i++)
	{
		cout<<"Hello:"<<argv[i]<<endl;
	}
	if(argc!=3)
	{
		cout<<"Usage:<file name> <start position> ";
		return 1;
	}
	fstream in(argv[1],ios::in|ios::binary);
	if(!in)
	{
		cout<<"Can't Open file";
		return 1;
	}
	in.seekg(atoi(argv[2]),ios::beg);
	while(in.get(ch))
	cout<<ch;
	return 0;
}
