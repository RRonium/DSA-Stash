#include <iostream>
using namespace std;
void display(int arr[])
{
    for(int x=0;x<10;x++)
        cout<<arr[x]<<" ";
    cout<<endl;
}
void InsertionSort(int arr[])
{
    int len=10;
    for(int i=1;i<len;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    cout<<"This is the sorted array:"<<endl;
    display(arr);
}
int main()
{
    int arr[10];
    cout<<"Please enter 10 elements in order to demonstrate the insertion sort algorithm."<<endl;
    for(int i=0;i<10;i++)
        cin>>arr[i];
    InsertionSort(arr);
    return 0;
}