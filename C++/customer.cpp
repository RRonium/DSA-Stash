#include<iostream>
using namespace std;
class Customer
{
private:
    char fname[10];
    char lname[10];
    char city[10];
    char Phoneno[10];
public:
    void print();

    void get();

};
void Customer::print()
{

        cout<<"\nfirst name";
        cout<<fname;
        cout<<"\tLast name";
        cout<<lname<<endl;
        cout<<"City";
        cout<<city;
        cout<<"\tPhone";
        cout<<Phoneno<<endl;


}
void Customer::get()
{

        cout<<"First name:";
        cin>>fname;
        cout<<endl<<"Last name:";
        cin>>lname;
        cout<<endl<<"City:";
        cin>>city;
        cout<<endl<<"Phone";
        cin>>Phoneno;

}
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
