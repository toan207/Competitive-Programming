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

const int MAX = 1e5 + 5;
int parent[MAX];
int Rank[MAX];

void makeSet(int n) {
    for (int i = 0; i <= n; ++i) {
        parent[i] = i;
        Rank[i] = 1;
    }
}

int findSet(int u) {
    if (parent[u] != u)
        parent[u] = findSet(parent[u]);
    return parent[u];
}

void unionSet(int u, int v) {
    int pu = findSet(u);
    int pv = findSet(v);

    if (pu == pv) return;

    if (Rank[pu] > Rank[pv]) parent[pv] = pu;
    else if (Rank[pu] < Rank[pv]) parent[pu] = pv;
    else {
        parent[pv] = pu;
        Rank[pu]++;
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vl f(MAX);
    f[0] = 1;
    for (int i = 1; i < MAX; ++i) {
        f[i] = f[i-1] * i;
        f[i] %= MOD;
    }
    int n,m; cin >> n >> m;
    makeSet(n);
    while (m--) {
        int u,v; cin >> u >> v;
        unionSet(u,v);
        findSet(u);
        findSet(v);
    }
    vi cnt(n + 1);
    ll sm = 0;
    for (int i = 0; i <= n; ++i) findSet(i);
    for (int i = 0; i <= n; ++i) cnt[parent[i]]++;
    for (int i = 0; i <= n; ++i) {
        if (cnt[i] > 2) sm += f[cnt[i]];
        sm %= MOD;
    }
    cout << sm << endl;
    return 0;
}