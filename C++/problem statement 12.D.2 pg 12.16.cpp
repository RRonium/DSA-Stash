#include<iostream>
#include<fstream>
class Customer
{
	private:
		char mobileno[11];
		char name[25];
		char dateofbirth[9];
		char billing address[51];
		char city [25];
		char phoneno[11];
		float amountoutstanding;
	
	public:
		void print()
		{
			
			cout<<endl<<"Mobile phone number:";
			cout<<mobileno<<endl;
			cout<<"\n name";
			cout<<name<<endl;
			cout<<"\n dateofbirth:"<<endl;
			cout<<dateofbirth<<endl;
			cout<<"\n\n Customer's billing address:";
			cout<<billingaddress<<endl;
			cout<<"\nCity:";
			cout<<city<<endl;
			cout<<"Residence phone no";
			cout<<phoneno<<endl;
			cout<<"\nAmount due:";
			cout<<amountoutstanding<<endl;
		}
		void get()
		{
			cout<<"Mobile phone number:";
			cin>>mobileno;
			cin.ignore();
			cout<<endl<<"Name:";
			cin.getline(name,25);
			cout<<endl<<"Date of birth:";
			cin>>dateofbirth;
			cin.ignore();
			cout<<endl<<"Customer's billing address:";
			cin.getline(billingaddress,51);
			cout<<endl<<"City:";
			cin.getline(city,25);
			cout<<endl<<"residence phone number:";
			cin>>phoneno;
			cout<<endl<<"Amount due:";
			cin>>amountoutstanding;
		}
};
int main()
{
	int ch;
	Customer object;
}
