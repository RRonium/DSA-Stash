#include <iostream>
using namespace std;
void display(int arr[])
{
    int len=5;
    for(int i=0;i<len;i++)
        cout<<arr[i]<<" ";
}
void BubbleSort(int arr[])
{
    int len=5;
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    display(arr);
}
int main()
{
    int arr[5];
    cout<<"Please enter 5 elements in the array for the demonstration of the Bubble Sorting Algorithm: "<<endl;
    for(int i=0;i<5;i++)
        cin>>arr[i];
    BubbleSort(arr);
    return 0;
}