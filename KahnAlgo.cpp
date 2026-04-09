#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> kahn(vector<vector<int>> &adj)
{
    vector<int> res;
    vector<int> indegree(adj.size(),0);
    queue<int> q;
    for(int i=0;i<adj.size();i++)
        for(int j:adj[i])
            indegree[j]++;
    for(int i=0;i<indegree.size();i++)
        if(indegree[i]==0)
            q.push(i);
    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        res.push_back(current);
        for(int i:adj[current])
        {
            indegree[i]--;
            if(indegree[i]==0)
                q.push(i);
        }
    }
    return res;
}
void display(vector<int> vec)
{
    for(vector<int>::iterator it=vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
}
int main()
{
    vector<vector<int>> adj={{1},{2},{3},{},{5},{1,2}};
    display(kahn(adj));
    return 0;
}