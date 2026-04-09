#include<iostream>
using namespace std;
class employee
{
 int salary[10];
 int avg;
 int cnt;
public:
    void accept_details()
    {
        for(int emp=0;emp<10;emp++)
        {
            cout<<"Enter your salary"<<endl;
            cin>>salary[emp];

        }
    }
    void arrange()
    {
        for(int i=0;i<10;i++)
        {
            for(int j=i+1;j<10;j++)
            {
                if(salary[i]>salary[j])
                {
                int temp;
                temp=salary[i];
                salary[i]=salary[j];
                salary[j]=temp;
                }
            }
        }
    }
    void display_max()
    {
            cout<<"Maximum Salary:"<<salary[9]<<endl;
    }
    void disp_min()
    {
            cout<<"Minimum Salary:"<<salary[0]<<endl;
    }
    void disp_avg()
    {
        int sum=0;
        avg=0;
        for(int i=0;i<10;i++)
        {
            sum=sum+salary[i];
        }
        avg=sum/10;
    }
    void count()
    {
        cnt=0;
        for(int i=0;i<10;i++)
        {
            if(salary[i]>avg)
            {
                cnt++;
            }
        }
        cout<<"No. of Employees having salary greater than average:"<<cnt<<endl;
    }
};
int main()
{
    employee emp1;
    emp1.accept_details();
    emp1.arrange();
    emp1.display_max();
    emp1.disp_min();
    emp1.disp_avg();
    emp1.count();
}
