#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[10]={4,3,0,2,6,0,8,0,1,0};
    int len=sizeof(arr)/sizeof(arr[0]);
    int zero=0;
    vector<int> temp;
    for(int i=0;i<len;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
        else
            zero++;
    }
    for(int i=0;i<zero;i++)
    {
        temp.push_back(0);
    }
    for(vector<int>::iterator it=temp.begin();it!=temp.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}