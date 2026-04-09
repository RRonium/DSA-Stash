#include <iostream>
using namespace std;
void pattern1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern2(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern3(int n)
{
    for (int i=0;i<=2*n-1;i++)
    {
        int star;
        if(i>n)
            star=2*n-i;
        else    
            star=i;
        for(int j=0;j<star;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void pattern4(int n)
{
    int flag=1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(flag%2==0)   
                {
                    cout<<"1 ";
                    flag++;
                }
            else 
                {
                    cout<<"0 ";
                    flag++;   
                }   
            
        }
        if(i%2==0)  flag--;
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern4(n);
    return 0;
}