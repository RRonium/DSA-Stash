#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int cut_count(int rcap, int rstem, int hstem)
{
    double vcap=(2/3)*3.14*pow(rcap,3);
    double vstem=(1/3)*3.14*pow(rstem,2)*hstem;
    int ratio=(int)(max(vcap,vstem),min(vcap,vstem));
    int k=log2(ratio);
    return k;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int p,q,a,b,c,d;
        double rcap,rstem,hstem;
        cin>>p>>q;
        rcap=p/q;
        cin>>a>>b>>c>>d;
        rstem=a/b;
        hstem=c/d;
        cut_count(rcap,rstem,hstem);
    }
    return 0;
}
