#include <iostream>
#include <cmath>
#include <string>
using namespace std;
long karatsuba(long x,long y)
{
    if(x<10||y<10)
        return x*y;
    
    int n=1+(int)max(log10(x),log10(y));
    long long power = 1;
    for (int i = 0; i < n/2; i++) 
        power *= 10;
    
    long x1=x/power;
    long x2=x%power;
    long y1=y/power;
    long y2=y%power;    

    long a=karatsuba(x1,y1);
    long b=karatsuba(x2,y2);
    long c=karatsuba(x1+x2,y1+y2)-a-b;

    return (a*power*power) + (c*power) + b;
}
int main()
{
    cout << karatsuba(1234, 5678) << endl;
    return 0;
}