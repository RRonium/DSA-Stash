//Optimization of the djikstra Algorithm
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> shortestpath(vector<vector<int>> &edges, int n, int origin)
{
    vector<vector<vector<int>>> adj(n);
    int maxWeight=0;
    for(auto e:edges)
    {
        adj[e[0]].push_back({e[1],e[2]});
        adj[e[1]].push_back({e[0],e[2]});
        maxWeight=max(maxWeight,e[2]);
    }

    vector<int> dist(n,1e9);
    dist[origin]=0;

    int maxDist = (n - 1) * maxWeight;
    vector<unordered_set<int>> buckets(maxDist + 1);

    buckets[0].insert(origin);
    for(int d=0;d<=maxDist;d++) 
    {
        while(!buckets[d].empty())
        {
            int u=*buckets[d].begin();
            buckets[d].erase(buckets[d].begin());

            if(d > dist[u])
                continue;
            for(auto &edge : adj[u])
            {
                int v=edge[0];
                int weight=edge[1];
                if(dist[u]+weight<dist[v])
                {
                    if(dist[v]!=1e9)
                        buckets[dist[v]].erase(v);

                    dist[v]=dist[u]+weight;
                    buckets[dist[v]].insert(v);
                }
            }
        }
    }
    return dist;
}
int main()
{
    int n = 9;
    int origin = 0;
    vector<vector<int>> edges = {
        {0, 1, 4},
        {0, 7, 8},
        {1, 2, 8},
        {1, 7, 11},
        {2, 3, 7},
        {2, 8, 2},
        {3, 4, 9},
        {3, 5, 14},
        {4, 5, 10},
        {5, 6, 2},
        {6, 7, 1},
        {6, 8, 6},
        {7, 8, 7}
    };
    
    vector<int> res = shortestpath(edges,n,origin);
    for (auto val : res) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}