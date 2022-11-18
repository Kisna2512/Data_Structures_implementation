#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Graph
{
public:
    unordered_map<T, list<T>> adj;

    void addedge(T u, T v, bool dir)
    {
        // dir=0 undirected
        // dir=1 directed

        adj[u].push_back(v);
        if (dir == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printadj()
    {
        for (auto it : adj)
        {
            cout << it.first << "->";
            for (auto jt : it.second)
            {
                cout << jt << ",";
            }
            cout << endl;
        }
    }
};

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout << "Enter the no of nodes:- " << endl;
    cin >> n;

    int m;
    cout << "Enter the no of edges:- " << endl;
    cin >> m;
    Graph<int> g;
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 0);
    }
    g.printadj();

    return 0;
}