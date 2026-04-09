#include <iostream>
#include <string>
using namespace std;
class Order
{
    private:
    long OrderID;
    string name;
    double amount;
    double discount;
    public:
    Order(long OrderID, string name, double amount)
    {
        this->OrderID=OrderID;
        this->name=name;
        this->amount=amount;
    }
    private:
    double calcDiscount()
    {
        if(amount>5000.0)
            return 0.1*amount;
        else if(amount>10000.0)
            return 0.15*amount;
        else 
            return 0.0;
    }
    friend void display(Order o);
};
void display(Order o)
{
    cout<<"Order ID: "<<o.OrderID<<endl;
    cout<<"Name: "<<o.name<<endl;
    cout<<"Amount: "<<o.amount<<endl;
    cout<<"Discount: "<<o.calcDiscount()<<endl;
    cout<<"Total: "<<o.amount-o.calcDiscount()<<endl;
}
int main()
{
    Order o1(007,"Sannidhya",23432.32);
    display(o1);
    return 0;
}