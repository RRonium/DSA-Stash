#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> bfsgraphtraversal(vector<vector<int>> &adj) 
{
    vector<int> res;
    vector<int> visited(adj.size(),0);
    queue<int> q;

    int origin=0;   
    visited[origin]=1;
    q.push(origin);

    while(!q.empty())
    {
        int current=q.front();
        q.pop(); 
        res.push_back(current);
        for(int i:adj[current])
        {
            if(!visited[i])
            {
                visited[i]=1;
                q.push(i);
            }
        }
    }
    return res;
}
void display(vector<int> vec)
{
    cout<<"The resultant vector after the bfs graph traversal is: "<<endl;
    for(vector<int>:: iterator it=vec.begin();it!=vec.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main()
{
    vector<vector<int>> adj = {{1, 2}, {0, 2}, {0, 1, 3, 4}, {2}, {2}};
    display(bfsgraphtraversal(adj));
    return 0;
}