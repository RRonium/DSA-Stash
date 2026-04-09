#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<int> rkarp(string &pat, string &txt)
{
    int d=256,q=101,m=pat.length(),n=txt.length(),p=0,t=0,h=1;
    vector<int> ans;
    
    for(int i=0;i<m-1;i++)
        h=(h*d)%q;
    for(int i=0;i<m;i++)
    {
        p=(d*p + pat[i])%q;
        t=(d*t + txt[i])%q;
    }
    for(int i=0;i<=n-m;i++)
    {
        if(p==t)
        {
            bool match=true;
            for(int j=0;j<m;j++)
            {
                if(pat[j]!=txt[i+j])
                {
                    match=false;
                    break;
                }
            }
            if(match)
                ans.push_back(i);
        }
        if(i<n-m)
        {
            t=(d*(t-txt[i]*h)+txt[i+m])%q;
            if(t<0)
                t+=q;
        }
    }
    return ans;
}
int main()
{
    string txt = "geeksforgeeks";
    string pat = "geeks";
    vector<int> res = rkarp(pat, txt);
    for (auto it : res) cout << it << " ";
    cout << "\n";
    return 0;
}