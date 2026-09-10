#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MAXN = 200005;

vector<int> adj[MAXN];
int distA[MAXN];
int distB[MAXN];

int farthest_node = -1;
int max_dist = -1;

void dfs(int node, int parent, int current_dist, int dist_array[]) {
    dist_array[node] = current_dist;
    if (current_dist > max_dist) {
        max_dist = current_dist;
        farthest_node = node;
    }
    for (int next_node : adj[node]) {
        if (next_node != parent) {
            dfs(next_node, node, current_dist + 1, dist_array);
        }
    }
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

        int temp[MAXN];
        max_dist = -1;
        dfs(1, 0, 0, temp);

        int nodeA = farthest_node;
        max_dist = -1;
        dfs(nodeA, 0, 0, distA);

        int nodeB = farthest_node;
        max_dist = -1;
        dfs(nodeB, 0, 0, distB);

        for (int i = 1; i <= n; i++) {
            cout << max(distA[i], distB[i]) << (i == n ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}