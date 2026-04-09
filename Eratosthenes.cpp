//We're going to be writing a program to display all the prime factors of an integer N
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=30;
    int prime[31];        
    for(int i=2;i<n;i++)
        prime[i]=1;
    for(int i=2;i<=int(sqrt(double(30)));i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                prime[j]=0;
            }           
        }
    }
    for(int i=2;i<n;i++)
    {
        if(prime[i]==1)
            cout<<i<<" ";
    }
    return 0;
}