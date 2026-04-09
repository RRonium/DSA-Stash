#include<iostream>
using namespace std;
class person
{
	protected:
		char name[20];
		char dateofbirth [12];
		char city[20];
		char phoneno[15];
	public:
	virtual void accept()
	{
		cout<< "First name"<<endl;
		cin>>name;
		cout<< "DOB"<<endl;
		cin>>dateofbirth;
		cout<< "city"<<endl;
		cin>>city;
		cout<< "Phone no."<<endl;
		cin>>phoneno;
		
		
		
		}
		virtual void display()
		{
			cout<<"first name:"<<name<<endl;
			cout<<"DOB:"<<dateofbirth<<endl;
			cout<<"city:"<<city<<endl;
			cout<<"phoneno:"<<phoneno<<endl;
		}
};
class customer : public person
{
	private:
		char billingaddress[30];
		float amountoutstanding;
	public:
		void accept()
		{
			cout<<"enter customer details";
			person::accept();
			cout<<"customers billing address";
			cin.getline(billingaddress,30);
			cout<<"amount due";
			cin>>amountoutstanding;
		}
		

void display()
{
	cout<<"enter customer details";
			person::accept();
			cout<<"customers billing address";
			cin.getline(billingaddress,30);
			cout<<"amount due";
			cin>>amountoutstanding;
}
};
class dealer:public person
{
	private:
		char shopaddress[30];
		int numsold;
		public:
			void accept()
			{
				cout<<"enter dealer's details";
				person::accept();
				cout<<"shop address";
				cin.getline(shopaddress,30);
				cout<<"number sold";
				cin>> phoneno;
			}
			void display()
			{
				cout<<"enter dealer's details";
				person::accept();
				cout<<"shop address";
				cin.getline(shopaddress,30);
				cout<<"number sold";
				cin>> phoneno;
			}
};
int main()
{
	person *ptr;
	ptr= new customer;
	ptr->accept();
	ptr->display();
	ptr = new dealer;
	ptr->accept();
	ptr->display();
	return 0;
}
