#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int findMinVertex(vector<int>& dist,vector<int>& visited,int V)
{
    int minVar=-1; 
    for(int i=0;i<V;i++)
        if(!visited[i] && (minVar==-1 || dist[i] < dist[minVar])) 
            minVar=i;
    return minVar;
}
void dijkstra(vector<vector<pair<int,int>>> &adj, int origin)
{
    vector<int> dist(adj.size(),INT_MAX);
    vector<int> visited(adj.size(),0);  
    //vector<vector<int>> paths(adj.size());
    dist[origin]=0;
    
    for(int j=0;j<adj.size();j++)
    {
        int u=findMinVertex(dist,visited,adj.size());           
        if(u==-1||dist[u]==INT_MAX)
            break;
        visited[u]=1;
        for(auto& i:adj[u])
        {   
            int v=i.first;
            int weight=i.second;
            if(!visited[v] && dist[u]+weight<dist[v])       //heuristic function
            {    
                dist[v]=dist[u]+weight;
                //paths[v]=paths[u];
                //paths[v].push_back(v);
            }
        }
    }
    for(int i=0;i<adj.size();i++)
        cout<<"The Node: "<<i<<" is at a distance: "<<dist[i]<<endl;
}
int main()
{
    int V = 5;
    vector<vector<pair<int,int>>> adj(V);

    adj[0] = {{1, 4}, {2, 8}};
    adj[1] = {{0, 4}, {4, 6}, {2, 3}};
    adj[2] = {{0, 8}, {3, 2}, {1, 3}};
    adj[3] = {{2, 2}, {4, 10}};
    adj[4] = {{1, 6}, {3, 10}};

    dijkstra(adj, 0);
    return 0;
}