#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvl vector<vector<long long>>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

vl dist;
vector<vector<pll>> adj;
int n,m,q;
const ll INF = 1e18;

pll dijkstra(int s) {
    dist.assign(n, INF);

    priority_queue<pll, vector<pll>, greater<pll>> pq;
    dist[s] = 0;
    pq.push({0,s});

    while (!pq.empty()) {
        int u = pq.top().second;
        int du = pq.top().first;
        pq.pop();

        if (du != dist[u]) continue;
        for (int i = 0; i < adj[u].size(); ++i) {
            int v = adj[u][i].second;
            int w = adj[u][i].first;
            if (dist[v] > du + w) {
                dist[v] = du + w;
                pq.push({dist[v],v});
            }
        }
    }

    ll mx = -INF, cnt = 0;
    for (ll i: dist) {
        if (i != INF && mx < i) {
            cnt = 1;
            mx = i;
        }
        else if (i == mx) cnt++;
    }
    return {mx,cnt};
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin >> n >> m >> q;
    adj.assign(n, vector<pll>());
    int u,v,w;
    while (m--) {
        cin >> u >> v >> w;
        adj[u].push_back({w,v});
        adj[v].push_back({w,u});
    }
    while (q--) {
        int Q; cin >> Q;
        pll tmp = dijkstra(Q);
        cout << tmp.first << " " << tmp.second << endl;
        dist.clear();
    }
    return 0;
}