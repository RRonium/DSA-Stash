#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int arr[]={4,3,9,6,7,0,1,2,4,3};
    int n1=arr[0],n2=arr[0];
    for(int i=1;i<10;i++)
    {
        if(arr[i]>n1)
            n1=arr[i];
        else if(arr[i]<n1 && arr[i]>n2)
            n2=arr[i];
        else
            continue;
    }
    cout<<n2;
    return 0;
}