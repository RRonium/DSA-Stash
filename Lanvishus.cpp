#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n;
    vector<string> words;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string word;
        cin>>word;
        words.push_back(word);    
    }
    for(int i=0;i<n;i++)
    {
        words[i]=words[i].substr(0,words[i].length()-2);
        words[i]+="oi";
        cout<<words[i]<<endl;
    }
    return 0;
}
