#include <iostream>
#include <vector>
using namespace std;
vector<int> bellmanFord(vector<vector<int>> &adj,int V, int origin)
{
    
    vector<int> dist(V,1e8);
    dist[origin]=0;

    for(int i=0;i<V;i++)
    {
        for(vector<int> j:adj)
        {
            int u=j[0];
            int v=j[1];
            int wt=j[2];
            if(dist[u]!=1e8 && dist[u] + wt < dist[v])
            {
                if(i==V-1)
                    return {-1};
                dist[v]=dist[u]+wt;
            }
        }
    }
    return dist;
}
int main()
{
    int V=5;
    vector<vector<int>> adj = {
        {1, 3, 2}, 
        {4, 3, -1},
        {2, 4, 1}, 
        {1, 2, 1},
        {0, 1, 5} 
    };
    int origin=0;
    vector<int> res=bellmanFord(adj,V,origin);
    for(int i:res)
        cout<<i<<" ";
    return 0;
}