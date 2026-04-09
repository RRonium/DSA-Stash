#include <iostream>
using namespace std;
void func1(int arr[])
{
    int temp=arr[0];
    for(int i=1;i<10;i++)
        arr[i-1]=arr[i];
    arr[9]=temp;

    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
}
void func2(int arr[], int d)
{
    for(int i=0;i<d;i++)
    {
        int temp=arr[0];
        for(int i=1;i<10;i++)
            arr[i-1]=arr[i];
        arr[9]=temp;
    } 
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={4,3,9,6,7,0,1,2,4,3};
    int d;
    cout<<"Enter by how many places u wish to shift the array: "<<endl;
    cin>>d;
    //func1(arr);
    func2(arr,d);
    return 0;
}