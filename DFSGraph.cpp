#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void dfsRec(vector<vector<int>> &adj,vector<int> &visited,vector<int> &res,int n)
{
    visited[n]=1;
    res.push_back(n);
    for(int i:adj[n])
        if(!visited[i])
            dfsRec(adj,visited,res,i);
}
void display(vector<int> vec)
{
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    vector<vector<int>> adj={{1,2},{0,2},{0,1,3,4},{2},{2}};    
    vector<int> res;
    vector<int> visited(adj.size(),0);
    int origin=0;
    dfsRec(adj,visited,res,origin);
    display(res);
    return 0;
}