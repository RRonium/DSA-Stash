#include <iostream>
using namespace std;
void lbound(int arr[],int len,int x)
{
    int l=0, u=len-1;
    int res=len;
    while(l<=u)
    {
        int mid=(l+u)/2;
        if(arr[mid]>=x)
        {
            res=mid;
            u=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<res<<endl;
}
void ubound(int arr[], int len, int x)
{
    int l=0, u=len-1;
    int res=len;
    while(l<=u)
    {
        int mid=(u+l)/2;
        if(arr[mid]>x)
        {
            res=mid;
            u=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<res<<endl;
}
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
    int len = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout<<"Enter the search key pls: "<<endl;
    cin>>x;
    cout<<"The elements of the array: ";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    lbound(arr,len,x);
    ubound(arr,len,x);
    return 0;
}