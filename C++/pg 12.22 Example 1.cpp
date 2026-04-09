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
			cout<<"\n Enter the registration number:";
			cin>>iReg_no;
		}
		void setName()
		{
			cout<<"\nEnter the name of the student:";
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
	student Svar;
	fstream oFil("studfile.dat",ios::app);
	Svar.setRegno();
	Svar.setName();
	oFil.write((char*)&Svar,sizeof(student));
/*	Svar.setRegno();
	Svar.setName();
	oFil.write((char*)&Svar,sizeof(student));
	*/
	fstream Fil("studfile.dat",ios::in);
	Fil.seekg(0,ios::end);
	int iEnd;
	iEnd=Fil.tellg();
	cout<<"The size of the file is:"<<iEnd<<endl;
	cout<<"Size of one record is:"<<sizeof(student)<<endl;
	int iNorec= iEnd/sizeof(student);
	cout<<"There are:"<<iNorec<<"records in the file"<<endl;
	return 0;
}
