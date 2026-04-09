#include<iostream>
using namespace std;
class Customer
{
private:
    char mobileNo[13];
    char name[26];
    char dateofBirth[11];
    char billingAdd[51];
    char city[26];
    char phoneNo[14];
    float amountOutstanding;
public:
    void print()
    {
        cout<<"Mobile phone number:";
        cout<<mobileNo<<endl;
        cout<<"Name:";
        cout<<name<<endl;
        cout<<"Date of Birth";
        cout<<dateofBirth<<endl;
        cout<<"Billing Address:";
        cout<<billingAdd<<endl;
        cout<<"City:";
        cout<<city<<endl;
        cout<<"Residence phone no."<<endl;
        cout<<phoneNo<<endl;
        cout<<"Amount due:"<<endl;
        cout<<amountOutstanding<<endl;
        }
    void get()
    {
        cout<<"Mobile phone number:";
        cin>>mobileNo;
        cout<<endl<<"name:";
        cin>>name;
        cout<<endl<<"Date of Birth";
        cin>>dateofBirth;
        cout<<endl<<"Billing Address";
        cin>>billingAdd;
        cout<<endl<<"City:";
        cin>>city;
        cout<<endl<<"Residence Phone number";
        cin>>phoneNo;
        cout<<endl<<"Amount due:";
        cin>>amountOutstanding;
    }
    };
int main()
{
    Customer object [2];
    for(int i=0;i<2;i++)
    {
       object[i].get();
    }
    for(int i=0;i<2;i++)
    {
        object[i].print();
    }
       return 0;
}
