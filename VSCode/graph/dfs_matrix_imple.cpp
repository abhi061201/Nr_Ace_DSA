#include <bits/stdc++.h>
using namespace std;

void dfs(int x, vector<vector<int>> adj, bool visited[])
{
    if (visited[x])
        return;

    cout<<x<<" , ";
    visited[x]= true;
    for(int i=0 ;i<adj.size();i++){
        if(adj[x][i]==1){
           dfs(i,adj,visited);
        }
    }
}

int main()
{

    cout << "Enter the no. of nodes and edes \n ";
    int n, e;
    cin >> n >> e;
    cout << "Enter the adjacency of nodes\n";
    vector<vector<int>> adj(n, vector<int>(n, 0));
    bool visited[n] = {false};

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    dfs(0, adj, visited);

    return 0;
}
