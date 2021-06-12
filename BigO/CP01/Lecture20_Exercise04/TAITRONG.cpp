#include <bits/stdc++.h>
using namespace std;

const int INF = -1;

typedef pair<int, int> pii;

vector<int> dist, path;
vector<bool> visited;
vector<vector<pii> > adj;
int n,m;

bool prim()
{
    dist.assign(n, INF);
    path.assign(n, - 1);
    visited.assign(n, false);

    priority_queue<pii> pq;
    pq.push({0,0});
    dist[0] = 0;

    int u, v, w;
    int count = 0;

    while (!pq.empty())
    {
        pii temp = pq.top();
        pq.pop();
        u = temp.second;
        if (visited[u]) continue;
        visited[u] = true;
        count++;
        for (pii nei: adj[u])
        {
            v = nei.first;
            w = nei.second;
            if (!visited[v] && dist[v] < w)
            {
                dist[v] = w;
                path[v] = u;
                pq.push({w,v});
            }
        }
    }
    return count == n;
}

int main()
{
    int s,t;
    cin>>n>>m>>s>>t;
    s--,t--;
    adj.assign(n, vector<pii>());
    for (int i=0; i<m; ++i)
    {
        int u,v,w; cin>>u>>v>>w;
        u--,v--;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    prim();
    int f = 0, marka = 1e6, markb = 1e6, markt = t;
    while (t != s && t != -1)
    {
        marka = min(marka, dist[t]);
        t = path[t];
        if (t == s)
            f = 1;
    }
    while (markt != s && s != -1)
    {
        markb = min(markb, dist[s]);
        s = path[s];
        if (markt == s)
            f = 1;
    }
    if (f)
        cout<<max(marka,markb);
    else
        cout<<-1;
    return 0;
}