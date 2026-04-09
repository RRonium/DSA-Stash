#include<iostream.h>
using namespace std;
class Student
{
	private:
		int Roll;
		char Name[10];	
	public:
		void accept(){
			cout<<"Accept Called"<<endl;
		}
		void display(){
			cout<<"Diplay Called"<<endl;
		}
		
};
int main()
{
	Student s1;
	s1.accept();
}
