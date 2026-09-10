#include <iostream>
using namespace std;
long long gcd(long long a, long long b)
{
    if(b==0)    return a;
    return gcd(b,a%b);
}
long long euler_totient(long long n)
{
    long long res=n;
    for(long long p=2;p*p<=n;p++)
    {
        if(n%p==0)
        {
            while(n%p==0) n/=p;
            res-=res/p;
        }
    }
    if(n>1) res-=res/n;
    return res;
}
int modpow(int x, int n, int m)             //x^n mod m
{
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}

int main()
{
    return 0;
}