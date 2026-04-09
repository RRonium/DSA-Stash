#include <fstream>
#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	ofstream outfile("CHRFILE.txt");
	char str[]="Lead me from darkness to light";
	for(int i = 0; i<= strlen(str); i++ )
	{
		outfile.put(str[i]);
	}
	outfile.close();
	ifstream infile("CHRFILE.txt");
	char chstr[80];
	int i = 0;
	while(infile.get(chstr[i++]));
	
	
	cout<<chstr;
	return 0;
}
