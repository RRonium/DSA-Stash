#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int findMinVertex(vector<int> &dist, vector<bool> &visited, int V)
{
    int min_index=-1;
    for(int i=0;i<V;i++)
        if(!visited[i] && (min_index==-1||dist[i]<dist[min_index]))
            min_index=i;
    return min_index;
}
vector<int> dijkstra(vector<vector<pair<int,int>>> &adj, int origin)
{
    int V=adj.size();
    vector<int> dist(V,INT_MAX);
    vector<bool> visited(V,false);

    dist[origin]=0;
    for(int i=0;i<V;i++)
    {
        int u=findMinVertex(dist,visited,V);
        if(u==-1||dist[u]==INT_MAX)
            return {-1};
        visited[u]=true;
        for(auto j:adj[u])
        {
            int v=j.first;
            int wt=j.second;
            if(!visited[v] && dist[u]+wt<dist[v])
                dist[v]=dist[u]+wt;
        }
    }
    return dist;
}
int main()
{
    return 0;
}