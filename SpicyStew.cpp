#include <cmath>
#include <cstdio>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
string chillies(unordered_map<int,int> &spice,int n)
{
    for(auto &it:spice)
    {
        if(it.second>1)
            return "YES";
    }
    return "NO";
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        unordered_map<int,int> spice;
        cin>>n;
        while(n--)
        {
            int m;
            cin>>m;
            spice[m]++;
        }
        cout<<chillies(spice,n)<<endl;
    }
    return 0;
}
