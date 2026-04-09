#include<iostream>
using namespace std;
class Student
{
	private:
		int Roll;
		int Fees;
	public:
		void accept();
		void display();
};
void Student::accept()
{
			cout<<"Enter Roll:";
			cin>>Roll;
			cout<<"Enter Fees:";
			cin>>Fees;
}
void Student::display()
{
			cout<<"Roll:"<<Roll<<"\tFees:"<<Fees<<endl;
}
int main()
{
	Student s1;
	s1.accept();
	s1.display();
}
