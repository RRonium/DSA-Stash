#include<iostream>
using namespace std;
class MyClass
{
private:
   static int count;
public:
    MyClass()
    {
        count++;
    }
    void disp()
    {
        cout<<"No. of Objects:"<<count<<endl;

    }
};
int MyClass::count;
int main()
{
    MyClass m1,m4,m5,m6;
    m1.disp();
    MyClass m2;
    m2.disp();
    MyClass m3;
    m3.disp();
    m1.disp();
}
