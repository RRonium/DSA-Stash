#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//Time Complexity: O(2^n)
int knapsackRec(int W, vector<int> &wt, vector<int> &val, int n)
{
    if(n==0||W==0)
        return 0;
    int pick=0;
    if(wt[n-1]<=W)
        pick=val[n-1]+knapsackRec(W,wt,val,n-1);
    int notpick=knapsackRec(W,wt,val,n-1);
    return max(pick,notpick); 
}   
int knapsackmemo(int W, vector<int> &wt, vector<int> &val, int n, vector<vector<int>> &memo)
{

    if(n==0||W==0)  return 0;
    if(memo[n][W]==-1)  return memo[n][W];

    int pick=0;
    if(wt[n-1]<=W)
        pick=val[n-1]+knapsackmemo(W,wt,val,n-1,memo);
    int notpick=knapsackmemo(W,wt,val,n-1,memo);
    return memo[n][W]=max(pick,notpick);
}
int knapsacktabulation(int W, vector<int> &val, vector<int> &wt)
{
    int n=wt.size();
    vector<vector<int>> dp(n+1,vector<int>(W+1));

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0||j==0)
                dp[i][j]=0; 
            else
            {
                int pick=0;
                if(wt[i-1]<=j)
                    pick=val[i-1]+dp[i-1][j-wt[i-1]]; 
                int notpick=dp[i-1][j];
                dp[i][j]=max(pick,notpick);     
            }
        }
    }
    return dp[n][W]; 
} 
int knapsack(int W, vector<int> &wt, vector<int> &val, int n) 
{
    vector<int> dp(W+1,0);
    for(int i=1;i<=wt.size();i++)
        for(int j=W;j>=wt[i-1];j--)
            dp[j]=max(dp[j], val[i-1] + dp[j - wt[i-1]]); 
    return dp[W];
}
int main()
{
    return 0;
}