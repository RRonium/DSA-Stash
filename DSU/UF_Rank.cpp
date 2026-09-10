#include <iostream>
#include <vector>
using namespace std;

class UnionFind
{
    private:
        vector<int> parent;
        vector<int> rank;

    public:
        UnionFind(int size)
        {
            parent.resize(size);
            rank.resize(size, 0);
            for(int i = 0; i < size; i++)
                parent[i] = i;
        }

        int find(int i)
        {
            if(parent[i] == i)
                return i;
            return parent[i] = find(parent[i]);
        }

        void unite(int i, int j)
        {
            int irep = find(i);
            int jrep = find(j);

            if(irep == jrep)
                return;

            if(rank[irep] < rank[jrep]) {
                parent[irep] = jrep;
            } else if(rank[jrep] < rank[irep]) {
                parent[jrep] = irep;
            } else {
                parent[jrep] = irep;
                rank[irep]++;
            }
        }
};

int main()
{
    int size = 5;
    UnionFind uf(size);
    uf.unite(1, 2);
    uf.unite(3, 4);
    
    bool sameSet_23 = (uf.find(2) == uf.find(3));
    bool sameSet_12 = (uf.find(1) == uf.find(2));
    
    cout << "2 and 3 are in the same set: " << (sameSet_23 ? "Yes" : "No") << endl;
    cout << "1 and 2 are in the same set: " << (sameSet_12 ? "Yes" : "No") << endl;
    
    return 0;
}