#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> finishOrder,d,path,vis;
vector<vector<int> > graph;

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
    graph.assign(n, vector<int>());
    d.assign(n,0);
    path.assign(n,0);
    vis.assign(n,0);
    for (int i = 0; i<m; ++i)
    {
        int a,b; cin>>a>>b;
        graph[a-1].push_back(b-1);
    }
    dfs(0);
    d[0] = 1;
    for (int i = finishOrder.size()-1; i >= 0; --i)
    {
        int u = finishOrder[i];
        for (int v: graph[u])
        {
            if (d[v] < d[u] + 1)
            {
                d[v] = d[u] + 1;
                path[v] = u;
            }
        }
    }
    if (!d[n-1])
    {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }
    stack<int> s;
    int u = n-1;
    s.push(u+1);
    
    while (u != 0)
    {
        u = path[u];
        s.push(u+1);
    }
    cout<<s.size()<<endl;
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}