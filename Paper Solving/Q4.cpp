#include <iostream>
#include <string>
using namespace std;
class Vehicle
{
    public:
    string model;
    double price=0.0;
};
class Car : public Vehicle
{
    double mileage;
    int seat_cap;
};
class Bike : public Car
{
    double engine_cap;
};
class Truck : public Vehicle, public Car
{
    double load_cap;
};
int main()
{
    int n;
    cout<<"Enter no. of vehicles: "<<endl;
    cin>>n;
    Vehicle v[n];
    for(int i=0;i<n;i++)
    {
        int ch;
        cout<<"1...Car"<<endl;
        cout<<"2...Bike"<<endl;
        cout<<"3...Truck"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                Car v1;
                v1.model="Camry";

        }
    }
    return 0;
}