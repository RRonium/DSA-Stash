#include <iostream>
#include <cmath>
using namespace std;
void func1(int i, int n)
{
    if(i>n)
        return;
    else
    {
        cout<<"Sannidhya"<<i<<endl;
        func1(i+1,n);
    }
}
void func2(int i)
{
    if(i>10)
        return;
    else
    {
        cout<<i<<" ";
        func2(i+1);
    }
}
//This method is to demonstrate backtracking
void func3(int i, int n)
{
    if(i>n)
        return;
    else
    {
        //cout<<i<<endl;
        func3(i+1,n);
        cout<<i<<endl;      //Backtracking...
    }
}
void summation(int i, int sum)
{
    if(i>5)
    {
        cout<<sum<<endl;
        return;
    }
    else
    {
        summation(i+1,sum+i);
    }
}
void fact(int i, int n, int prod)
{
    if(i>n)
    {
        cout<<prod<<endl;
        return;
    }
    else
    {
        fact(i+1,n,prod*i);
    }
}
void arr_rev(int l, int u, int arr[], int length)
{
    if(l>floor(length/2))
    {
        for(int i=0;i<length;i++)
        {
            cout<<arr[i]<<endl;
        }
        return;
    }
    else
    {
        int temp=arr[l];
        arr[l]=arr[u];
        arr[u]=temp;
        arr_rev(l+1,u-1,arr,length);
    }
}
void palin(int i, string s)
{
    if(i<0)
    {
        cout<<s<<endl;
        return;
    }
    else
    {
        s.push_back(s.at(i));
        palin(i-1,s);
    }
}
void fibo(int i, int lim, int n1, int n2)
{
    if(i>lim)
        return;
    else
    {
        cout<<n1+n2<<" ";
        fibo(i+1,lim,n2,n1+n2);
    }
}
int main()
{
    cout<<"1 1 ";
    fibo(0,5,1,1);
    return 0;
}