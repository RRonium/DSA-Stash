#include <iostream>
#include <string>
using namespace std;
class Employee
{
    public:
    string name;
    long ID;
    double salary;
    Employee(string name="Employee", long ID, double salary=10000.0)
    {
        this->name=name;
        this->ID=ID;
        this->salary=salary;
    }
    double calcSalary()
    {   
        if(salary<50000.0)
            return salary;
        else if(salary>=50000.0 && salary<100000.0)
            return (0.9)*salary;
        else if(salary>=100000.0)
            return (0.8)*salary;
        else 
            return -1;
    }
};
int main()
{
    Employee e1("Sannidhya",007,30000.00);
    cout<<"My Salary:"<<endl;
    cout<<e1.calcSalary()<<endl;
    return 0;
}