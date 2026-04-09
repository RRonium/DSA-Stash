#include<iostream>
using namespace std;
class Student
{
	private:
		int RegNo;
		char Name[10];
		char Course[15];
		int Fees;
	public:
		void accept()
		{
			cout<<"Accept Details"<<endl;
		}
		void display()
		{
			cout<<"Display Details"<<endl;
		}
};
int main()
{
	Student ram;
	ram.accept();
}
