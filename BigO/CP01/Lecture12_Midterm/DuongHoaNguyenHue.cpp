#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define _io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define MAXN 400005

vector <int> DSK[MAXN];

int cnt_ver = 0;
int cnt_edg = 0;
bool isCycle = true;
int vi[MAXN];

void DFS(int u){
    if(DSK[u].size() != 2)
        isCycle = false;
    vi[u] = 1;
    cnt_ver ++;
    cnt_edg += DSK[u].size();
    for(int v: DSK[u]){
        if(!vi[v]){
            DFS(v);
        }
    }
}

typedef pair <int, int> ii;

int main() {
    _io
    int t; cin >> t;
    int sum_n = 0, sum_m = 0;
    while(t--){
        int n, m; cin >> n >> m;
        sum_n += n;
        sum_m += m;
        fill(vi+1, vi+1+n, 0);
      
        for (int i = 1; i<=n; i++)
            DSK[i].clear();
      
        map <ii, int> MM;
        while(m--){
            int u, v; cin >> u >> v;
            if (u > v) swap(u, v);
            assert(1 <= u && u <= n);
            assert(1 <= v && v <= n);
            DSK[u].pb(v);
            DSK[v].pb(u);
            MM[ii(u, v)]++;
            if (MM[ii(u, v)] > 1) {
                cout << t << endl;
            cout << n << endl;
                cout << u <<' '<<v << endl;
                return true;
            }
        }
      
        int num_cycle = 0, num_tree = 0;
        for (int i = 1; i<=n; i++){
            if(!vi[i]){
                cnt_ver = 0;
                cnt_edg = 0;
                isCycle = true;
                DFS(i);
                cnt_edg /= 2;
              
                if(cnt_ver - 1 == cnt_edg)
                    num_tree ++;
                if(isCycle)
                    num_cycle ++;
            }
        }
        cout << num_tree << ' ' << num_cycle << '\n';
    }
}