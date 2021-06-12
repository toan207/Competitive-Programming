#include <bits/stdc++.h>
using namespace std;

int n,m;
const long long MOD = 1e9 + 7;
vector<vector<int> > graph;
vector<long long> vis, point, finishOrder;

void dfs(int u)
{
    vis[u] = 1;
    for (int i: graph[u])
        if (!vis[i])
            dfs(i);
    finishOrder.push_back(u);
}

int main()
{
    cin>>n>>m;
    graph.assign(n+1, vector<int>());
    vis.assign(n+1,0);
    point.assign(n+1,0);
    for (int i = 0; i<m; ++i)
    {
        int a,b; cin>>a>>b;
        graph[a].push_back(b);
    }
    dfs(1);
    point[1] = 1;
    for (int i = finishOrder.size()-1; i>=0; i--)
    {
        int u = finishOrder[i];
        for (int v: graph[u])
            point[v] = (point[v] + point[u]) % MOD;
    }
    cout<<point[n]<<endl;
    return 0;
}