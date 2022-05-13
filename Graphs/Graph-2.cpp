#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
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
    unordered_map<int, vector<int>> getAdj()
    {
        return adj;
    }
};

void bfs(unordered_map<int, vector<int>> adj)
{
    unordered_map<int, bool> visited;
    for (auto i : adj)
    {
        visited[i.first] = false;
    }
    for (auto j : visited)
    {
        if (!visited[j.first])
        {
            queue<int> q;
            q.push(j.first);
            cout << j.first << " ";
            visited[j.first] = true;
            while (!q.empty())
            {
                int top = q.front();
                q.pop();
                for (auto i : adj[top])
                {
                    if (!visited[i])
                    {
                        cout << i << " ";
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
        }
    }
    cout << endl;
}

void dfs(unordered_map<int, vector<int>> adj, unordered_map<int, bool> &visited, int element)
{
    visited[element] = true;
    cout << element << " ";
    for (auto i : adj[element])
    {
        if (!visited[i])
        {
            dfs(adj, visited, i);
        }
    }
}

void printdfs(unordered_map<int, vector<int>> adj)
{
    unordered_map<int, bool> visited;
    for (auto i : adj)
    {
        visited[i.first] = false;
    }
    for (auto j : visited)
    {
        if (!visited[j.first])
        {
            dfs(adj, visited, j.first);
        }
    }
}

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
    unordered_map<int, vector<int>> adj = g.getAdj();
    cout << "BFS - ";
    bfs(adj);
    cout << "DFS - ";
    printdfs(adj);
}