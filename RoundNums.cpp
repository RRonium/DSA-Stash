#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int num=n,i=0;num!=0;num/=10,i++)
    {
        if(num%10==0)
            continue;
        vec.push_back((num%10)*int(pow(10,i)));
    }
    cout<<vec.size()<<endl;
    for(int i=vec.size()-1;i>=0;i--)
        cout<<vec[i]<<" ";
    return 0;
}