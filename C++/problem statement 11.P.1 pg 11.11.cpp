#include<iostream>
using namespace std;
class application
{
	protected:
		char appcode[4];
		int storagespace;
	public:
	 void getapp();
	 void showapp();
};
class spellchecker:public application
{
	protected:
		char lang[5];
	public:
		void getspell();
		void showspell();
};
class calculator: virtual application
{
	protected:
		int noofoperations;
	public:
		void getcall();
		void showcal();
};
class spreadsheet : public spellchecker, public calculator
{
	private:
		int noofsheets;
	public:
		void getsheet()
		{
			cout<<"Get sheet"<<endl;
		}
		void showsheet()
		{
			cout<<"Show Sheet"<<endl;
		}
};
int main()
{
	spreadsheet s;
	s.getsheet();
	s.showsheet();
return 0;
}
