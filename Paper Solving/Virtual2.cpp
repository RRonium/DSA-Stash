#include <iostream>
using namespace std;
class Account
{
    private:
    string accNo;
    double balance;

    public:
    Account(const string &n, double b)
    {
        accNo=n;
        balance=b;
    }
    double getBalance()
    {
        return balance;
    }
    virtual double calculateInterest() = 0;
};
class SavingsAccount : virtual public Account
{
    public:
    SavingsAccount(const string &n, double b) : Account(n,b)
    {}
    double calculateInterest() override
    {
        return 0.05*getBalance();
    }
};  
class CurrentAccount : virtual public Account
{
    public:
    CurrentAccount(const string &n, double b) : Account(n,b)
    {}
    double calculateInterest() override
    {
        return 0.02*getBalance();
    }
};
class HybridAccount : public SavingsAccount, public CurrentAccount
{
    public:
    HybridAccount(const string &n, double b) : Account(n,b), SavingsAccount(n,b), CurrentAccount(n,b)
    {}
    double calculateInterest() override
    {
        return (SavingsAccount::calculateInterest()+CurrentAccount::calculateInterest())/2.0;
    }
};
int main()
{
    string accNo;
    double balance;
    cout<<"Enter the account no. :"<<endl;
    cin>>accNo;
    cout<<"Enter the balance:"<<endl;
    cin>>balance;

    HybridAccount hba(accNo,balance);
    cout<<"The calculated interest on the hybrid account is: "<<hba.calculateInterest()<<endl;
    return 0;
}