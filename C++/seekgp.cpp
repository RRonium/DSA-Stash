#include<iostream>
#include<fstream>
#include <stdlib.h>
using namespace std;
int main(int argc,char *argv[])
{
	fstream inout(argv[1],ios::in|ios::out|ios::binary);
	long e,i,j;
	char c1,c2;
	e=atol(argv[2]);
	for(i=0,j=e;i<j;i++,j--)
	{
		inout.seekg(i,ios::beg);
		inout.get(c1);
		inout.seekg(j,ios::beg);
		inout.get(c2);
		inout.seekp(i,ios::beg);
		inout.put(c2);
		inout.seekp(j,ios::beg);
		inout.put(c1);
	}	
	inout.close();
	return 0;
}
