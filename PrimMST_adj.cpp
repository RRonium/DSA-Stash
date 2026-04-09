#include <iostream>
#include <vector>
using namespace std;
int findMinVertex(vector<int> &key, vector<bool> &mstSet, int V)
{
    int min=1e9,min_index=-1;
    for(int i=0;i<V;i++)
        if(!mstSet[i] && key[i]<min)
            min=key[i], min_index=i;
    return min_index;
}
vector<int> primMST(vector<vector<pair<int,int>>> &adj, int origin)
{
    int V=adj.size();
    vector<int> parent(V,-1);
    vector<bool> mstSet(V,false);
    vector<int> key(V,1e9);

    key[origin]=0;
    mstSet[origin]=true;

    for(int i=0;i<V;i++)
    {
        int u=findMinVertex(key,mstSet,V);
        if(u==-1)   break;
        mstSet[u]=true;
        for(auto e:adj[i])
        {
            int v=e.first;
            int wt=e.second;
            if(!mstSet[v] && wt<key[v])
            {
                parent[v]=u;
                key[v]=wt;
            }
        }
    }
    return parent;
}
int main()
{
    return 0;
}