#include <iostream>
#include <vector>
using namespace std;
void floydwarshall(vector<vector<int>> &dist)
{
    for(int k=0;k<dist.size();k++)
        for(int i=0;i<dist.size();i++)
            for(int j=0;j<dist.size();j++)
                if(dist[i][k]!=1e8 && dist[k][j]!=1e8)
                    dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
}
int main()
{
    int INF = 1e8;
    vector<vector<int>> dist = {
        {0, 4, INF, 5, INF},
        {INF, 0, 1, INF, 6},
        {2, INF, 0, 3, INF},
        {INF, INF, 1, 0, 2},
        {1, INF, INF, 4, 0}
    };

    floydwarshall(dist);
    for(int i = 0; i<dist.size(); i++) {
        for(int j = 0; j<dist.size(); j++) {
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}