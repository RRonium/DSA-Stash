#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*void sort(int arr[])
{
    int len=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        int min_index=i;
        for(int j=i+1;j<len;j++)
        {
            int temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
    //display
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}*/
int main()
{
    int arr[10]={4,3,6,5,4,0,6,7,1,2};
    vector<int> unique;
    for(int i;i<10;i++)
    {
        int flag=0;
        for(int j=0;j<unique.size();j++)
        {
            if(unique[j]==arr[i])
                flag++;
        }
        if(flag==0)
            unique.push_back(arr[i]);
        else
            continue;
    }
    sort(unique.begin(),unique.end());
    for(vector<int>::iterator it=unique.begin();it!=unique.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}