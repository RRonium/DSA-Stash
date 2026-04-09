#include<iostream>
using namespace std;
class Dealer
{
    public:
    char mobileNo[11];
    char dealername[25];
    char dealercity[51];
    char dealeraddress[25];
    static int companyID;
    public:
        static void showID()
        {

            //cout<<"The dealer's name is:"<<dealername;
            cout<<"the company name is:"<<companyID;
        }
        void get()
        {
            cin>>dealername;
            cin>>companyID;
        }
        void print()
        {
            cout<<dealername;
            cout<<companyID;
        }
};
int Dealer:: companyID=6519;
main()
{

}
