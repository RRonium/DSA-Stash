#include <iostream>
using namespace std;
class Time
{
    private:
    int hr;
    int min;
    public:
    Time(int hr=0, int min=0)
    {
        this->hr=hr;
        this->min=min;
    }
    Time operator+(const Time &t)
    {
        Time result;
        result.min=this->min+t.min;
        result.hr=this->hr+t.hr+(result.min/60);
        result.min%=60;
        return result;
    } 
    void display()
    {
        cout<<"Hours: "<<hr<<" | Minutes: "<<min<<endl;
    }
};
int main()
{
    Time t1(2, 45); 
    Time t2(1, 30); 

    Time t3=t1+t2;

    cout<<"Time 1: "<<endl;
    t1.display();
    cout<<"Time 2: "<<endl;
    t2.display();
    cout<<"Time 3: "<<endl;
    t3.display();
    return 0;
}