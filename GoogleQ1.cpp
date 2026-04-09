#include <iostream>
#include <string>
using namespace std;
int check(string s, string word)
{
    int prev=-1,flag=0;
    for(int i=0;i<word.length();i++)
    {
        for(int j=0;j<s.length();j++)
        {
            if(word[i]==s[j])
            {
                if(j>=prev)
                    prev=j;
                else
                    flag++;
                    break;
            }
        }
        if(flag!=0)
            return 0;
    }
    if(flag==0)
        return 1;
    else
        return 0;
}
int main()
{
    int count=0;
    string s="abcde";
    string words[]={"cad","dcnoen","acd","ace"};
    int len=sizeof(words)/sizeof(words[0]);
    for(int i=0;i<len;i++)
    {
        if(check(s,words[i])==1)
            count++;
    }
    cout<<count;
    return 0;
}