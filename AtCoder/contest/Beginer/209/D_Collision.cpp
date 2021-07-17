#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

const int MAX = 1e5 + 10;
const int MAX_LOG = 18;

int tin[MAX], tout[MAX];
int parent[MAX][MAX_LOG];
vi graph[MAX];
int level[MAX];
int counter, n, q, l;

void DFS(int u, int p)
{
    tin[u] = ++counter;
    parent[u][0] = p;
    for (int v: graph[u])
        if (v != p)
        {
            level[v] = level[u] + 1;
            DFS(v, u);
        }
    tout[u] = ++counter;
}

void preprocess()
{
    counter = 0;
    l = ceil(log2(n));
    DFS(1,1);
    for (int k = 1; k<=l; ++k)
        for (int i = 1; i<=n; ++i)
            parent[i][k] = parent[parent[i][k-1]][k-1];
}

int isAncestor(int u, int v)
{
    return tin[u] < tin[v] && tin[v] <= tout[u];
}

int lca(int u, int v)
{
    if (isAncestor(u,v)) return u;
    if (isAncestor(v,u)) return v;

    for (int k = l; k>=0; k--)
        if (!isAncestor(parent[u][k], v))
            u = parent[u][k];
    return parent[u][0];
}

int query(int u, int len)
{
    while(len)
    {
        int k = ceil(log2(n));
        u = parent[k][u];
        len -= 1<<k;
        len = max(0,len);
    }
    return u;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin>>n>>q;
    for (int i = 0; i<n-1; ++i)
    {
        int u,v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    preprocess();
    while (q--)
    {
        int u,v; cin>>u>>v;
        int temp = lca(u,v);
        int dist = level[u] + level[v] - 2 * level[temp];
        int pos;
        if (level[u] > level[v])
            pos = query(u, dist/2);
        else
            pos = query(v, dist/2);
        if (dist%2)
            cout<<"Road"<<endl;
        else
            cout<<"Town"<<endl;
    }
    return 0;
}