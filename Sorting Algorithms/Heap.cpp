#include <iostream>
using namespace std;
void heapify(vector<int> &arr, int size, int i)
{
    int largest=i;
    int li=2*i+1;
    int ri=2*i+2;
    if(li<size && arr[li]>arr[largest])
        largest=li;
    if(ri<size && arr[ri]>arr[largest])
        largest=ri;
    if(largest!=i) 
    {
        swap(arr[i],arr[largest]);
        heapify(arr,size,largest);
    }
}
void heapSort(vector<int> &arr)
{
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--)
        heapify(arr,n,i);
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
int main()
{
    vector<int> arr={9,4,3,8,10,2,5};
    heapSort(arr);
    for(int i=0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    return 0;
}