#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void bfs(vector<vector<int>> &graph, vector<int> &dist, vector<int> &par, int S)
{
    queue<int> q;
    dist[S]=0;
    q.push(S);

    while(!q.empty())
    {
        int current=q.front();
        q.pop();
        for(int i:graph[current])
        {
            if(dist[i]!=1e9)
            {
                par[i]=current;
                dist[i]=dist[current]+1;
                q.push(i);
            }
        }
    }
}
void shortestpath(vector<vector<int>> &graph, int S, int D, int V)
{
    vector<int> dist(V,1e9);
    vector<int> par(V,-1);
    bfs(graph,dist,par,S);

    if(dist[D]==1e9)
    {
        cout<<"The destination that you've chosen is unreachable."<<endl;
        return;
    }

    vector<int> path;
    path.push_back(D);
    for(int current=D;par[current]!=-1;current=par[current])
        path.push_back(current);
    for(int i=path.size()-1;i>=0;i--)
        cout<<path[i]<<" ";
}
int main()
{
    int V = 4;
    vector<vector<int>> graph(V);
    graph[0] = {1, 2};
    graph[1] = {0, 3};
    graph[2] = {0, 3};
    graph[3] = {1, 2};

    int source=0, dest=3;
    cout << "Shortest path from " << source << " to " << dest << ": ";
    shortestpath(graph, source, dest, V);
    return 0;
}