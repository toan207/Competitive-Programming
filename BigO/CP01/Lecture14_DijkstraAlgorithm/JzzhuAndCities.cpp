#include <bits/stdc++.h>

#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef pair <ll, int> ii;

const ll oo = 1e18 + 7;
const int N = 1e5 + 7;

int n, m, k;
vector <ii> graph[N];
bool visited[N];

int main()
{
    srand(time(NULL));
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back(ii(w, v));
        graph[v].push_back(ii(w, u));
    }
    priority_queue <ii> pq;
    while (k--) {
        int v, w;
        cin >> v >> w;
        pq.push(ii(-w, -v));
    }
    for (int i = 1; i<=n; i++)
        visited[i] = false;
    pq.push(ii(0, 1));
    int result = 0;
	while (!pq.empty()) {
		int u = pq.top().se;
		ll du = pq.top().fi;
		pq.pop();
		if (u < 0 && visited[u = -u] == true)
            result++;
		if (visited[u] == true)
            continue;
		visited[u] = true;
		for (int i = 0; i < graph[u].size(); i++){
			int v = graph[u][i].se;
            int uv = graph[u][i].fi;
			if (!visited[v]) {
                pq.push(ii(du - uv, v));
			}
		}
	}
	cout << result;
}
