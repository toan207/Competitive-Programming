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

vvi graph;
int n, m, f = 0;
vi path;
vector<bool> visited;
 
void findHamiltonPath (int u)
{
    if (path.size() == n && !f)
    {
        bool hasCycle = false;
        for (int v : graph[u])
        {
            if (v == path[0])
            {
            hasCycle = true;
            break;
            }
        }

        for (int i: path)
            cout<<i+1<<" ";
        cout<<endl;

        f = 1;
        return;
    }
 
    for (int v : graph[u])
    {
        if (!visited[v])
        {
            visited[v] = true;
            path.push_back(v);
            findHamiltonPath(v);
            path.pop_back();
            visited[v] = false;
        }
    }
}

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    graph.assign(n,vi());
    for (int u, v, i = 0; i < m; i++)
    {
        cin >> u >> v;
        u--,v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 0; i<n; ++i)
    {
        visited.assign(n, false);
        findHamiltonPath(i);
        visited.clear();
        path.clear();
    }

    if (!f)
        cout<<"Khong co duong di Hamilton"<<endl;

    return 0;
}