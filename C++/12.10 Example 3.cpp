#include<fstream>
#include<iostream>
using namespace std;
class student
{
	private:
		int iReg_no;
		char cName[20];
	public:
		void setRegno()
		{
			cout<<"\n Enter the Registration Number:";
			cin>>iReg_no;
		}
		void setName()
		{
			cout<<"\n Enter the name of the student:";
			cin>>cName;
		}
		int getRegno()
		{
			return iReg_no;
		}
		char *getName()
		{
			return cName;
		}
};
int main()
{
	ofstream Sfil("studfile.dat");
	char ch;
	student Svar;
	Svar.setRegno();
	Svar.setName();
	//Sfil<<Svar.getRegno()<<" "<<Svar.getName();
	Sfil.write((char*)&Svar,sizeof(student));
	Sfil.close();
	cout<<"\n Do you to view the contents of the file (y/n)?";
	cin>>ch;
	if(ch=='y')
	{
		ifstream Sfil("studfile.dat");
		char ireg;
		char nam[20];
	//	Sfil>>ireg>>nam;
		Sfil.read((char*)&Svar,sizeof(student));
		cout<<"\nReg No.:"<<Svar.getRegno();
		cout<<"\n Student Name is "<<Svar.getName();
	}
}
