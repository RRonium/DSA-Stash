#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 200005;

vector<int> adj[MAXN];
int max_dist = -1;
int farthest_node = -1;

void dfs(int node, int parent, int dist) {
    if (dist > max_dist) {
        max_dist = dist;
        farthest_node = node;
    }
    
    for (int next_node : adj[node]) {
        if (next_node != parent) {
            dfs(next_node, node, dist + 1);
        }
    }
}

int getTreeDiameter(int n) {
    max_dist = -1;
    dfs(1, 0, 0);

    int start_node = farthest_node;
    max_dist = -1;
    dfs(start_node, 0, 0);

    return max_dist;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (cin >> n) {
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        cout << getTreeDiameter(n) << "\n";
    }

    return 0;
}