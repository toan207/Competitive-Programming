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
    int n; cin >> n;
    vl a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    ll y,z; cin >> y >> z;
    int cnt = 0;
    y = abs(y-z);
    priority_queue<ll, vector<ll>, greater<ll> > pq;
    for (int i = 0; i < n; ++i)
        pq.push(abs(a[i] - z));
    while (!pq.empty()) {
        int u = pq.top();
        pq.pop();
        if (u < y) cnt++;
        else break;
        y -= u;
    }
    cout << cnt << endl;
    return 0;
}