#include <cmath>
#include <cstdio>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <algorithm>
using namespace std;
int calc(vector<int> fruits)
{
    int res=0,i=0;
    unordered_map<int,int> freq;
    for(int j=0;j<(int)fruits.size();j++)
    {
        freq[fruits[j]]++;
        while((int)freq.size()>2)
        {
            freq[fruits[i]]--;
            if(freq[fruits[i]]==0)
                freq.erase(fruits[i]);
            i++;
        }
    res=max(res,j-i+1);
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> fruits;
        while(n--)
        {
            int m;
            cin>>m;
            fruits.push_back(m);        
        }
        cout<<calc(fruits)<<endl;
    }
    return 0;
}
