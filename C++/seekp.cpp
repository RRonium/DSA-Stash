#include<iostream>
#include<fstream>
#include <stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		cout<<"Usage:<file name> <position> <char>";
		return 1;
	}
	fstream out(argv[1],ios::in|ios::out|ios::binary);
	if(!out)
	{
		cout<<"Can't Open file";
		return 1;
	}
	out.seekp(atoi(argv[2]),ios::beg);
	out.put(*argv[3]);
	out.close();

	return 0;
}
