#include<iostream>
using namespace std;
class Test{
private:
    int var;
public:
    Test(int a)
    {
        var=a;
    }
    friend void func(Test);
};
void func(Test t1)
{
    cout<<"Value is:"<<t1.var<<endl;
}
int main()
{
    Test t(10);
    func(t);
}
