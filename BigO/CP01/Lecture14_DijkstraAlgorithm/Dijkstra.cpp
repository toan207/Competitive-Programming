#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll oo = 1e18;
typedef pair<ll, ll> ii;
const int maxn = 100007;

vector<ii> graph[maxn];
int n, m;
ll d[maxn];
int par[maxn];

void dijkstra() {
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    for (int i = 1; i <= n; i++)
        d[i] = oo;
    d[1] = 0;
    pq.push(ii(0, 1));

    while (pq.size()) {
        int u = pq.top().second;
        ll du = pq.top().first;
        pq.pop();
        if (du != d[u])
            continue;

        for (int i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i].second;
            ll uv = graph[u][i].first;
            if (d[v] > du + uv) {
                par[v] = u;
                d[v] = du + uv;
                pq.push(ii(d[v], v));
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a, b, m, w;
    cin >> n >> m;
    while (m--) {
        cin >> a >> b >> w;
        graph[a].push_back(ii(w, b));
        graph[b].push_back(ii(w, a));
    }
    dijkstra();
    if (d[n] == oo) cout << -1;
    else {
        int u = n;
        vector <int> a;
        do {
            a.push_back(u);
            u = par[u];
        } while (u != 0);
        for (int i = a.size() - 1; i>=0; i--) cout << a[i] <<' ';
    }
}
