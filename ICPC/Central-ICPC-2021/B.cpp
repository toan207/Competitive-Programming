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

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,m; cin >> n;
    vl a;
    ll tot = 1, cnt = 0, mi = -1e9, f = 0;
    m = n;
    while (m--) {
        ll x; cin >> x;
        a.push_back(x);
        if (x < 0) {
            cnt++;
            mi = max(mi, x);
        }
        if (!x) f++;
    }
    if (!f){
        if (cnt%2) {
            for (int i = 0; i < n; ++i) {
                if (mi == a[i]) continue;
                tot *= a[i];
                if (tot < 0) tot *= -1;
                tot %= MOD;
            }
            cout << tot << endl;
        }
        else {
            for (int i = 0; i < n; ++i) {
                tot *= a[i];
                if (tot < 0) tot *= -1;
                tot %= MOD;
            }
            cout << tot << endl;
        }
    }
    else if (f == 1) {
        if (cnt%2) cout << 0 << endl;
        else {
            for (int i = 0; i < n; ++i) {
                if (!a[i]) continue;
                tot *= a[i];
                if (tot < 0) tot *= -1;
                tot %= MOD;
            }
            cout << tot << endl;
        }
    }
    else cout << 0 << endl;
    return 0;
}