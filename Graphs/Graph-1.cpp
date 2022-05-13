#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Graph
{
public:
    unordered_map<int, vector<int>> adj;

    void insert(int u, int v, bool direction)
    {
        // direction - 0 - undirected
        // direction - 1 - directed
        adj[u].push_back(v);
        if (!direction)
            adj[v].push_back(u);
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << " - ";
            for (auto j : i.second)
                cout << j << " ";
            cout << endl;
        }
    }
};

int main()
{
    Graph g;
    int m;
    cout << "Enter total number of edges" << endl;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.insert(u, v, 0);
    }
    g.print();
}