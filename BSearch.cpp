#include <iostream>
using namespace std;
int bsearch(int arr[], int len, int key)
{
    int u=len-1,l=0;
    while(l<=u)
    {
        int mid=(u+l)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {    
            l=mid+1;
        }
        else
        {
            u=mid-1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key;
    cout << "Array elements: ";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element to search: ";
    cin >> key;
    int result = bsearch(arr, len, key);
    if (result != -1) 
    {
        cout << "Element found at position: " << result+1 << endl;
    }
    else 
    {
        cout<<"Element not found in the array"<<endl;
    }
    return 0;
}