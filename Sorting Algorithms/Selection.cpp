#include <iostream>
using namespace std;
void display(int arr[])
{
    for(int i=0;i<10;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
void SelectionSort(int arr[])
{
    int len=10;
    for(int i=0;i<len;i++)
    {
        int min_index=i;
        for(int j=i+1;j<len;j++)
            if(arr[min_index]>arr[j])
                min_index=j;
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    display(arr);
}
int main()
{
    int arr[10];
    cout<<"Please enter 10 elements for the array in order to see the demonstration of the Selection Sort algorithm"<<endl;
    for(int i=0;i<10;i++)
        cin>>arr[i];
    SelectionSort(arr);
    return 0;
} 