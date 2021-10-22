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
    vl heroes(n);
    ll totStr = 0;
    FOR(i,0,n) {
        cin >> heroes[i];
        totStr += heroes[i];
    }
    sort(all(heroes));
    cin >> m;
    vector<ll>::iterator upper;
    FOR(i,0,m) {
        ll df, at; cin >> df >> at;
        upper = upper_bound(all(heroes), df);
        int mx = min(n - 1, upper - heroes.begin());
        int mi = max(0, mx - 1);
        ll getMin = at - (totStr - heroes[mi]), getMax = at - (totStr - heroes[mx]);
        if (getMax <= 0) cout << max(0LL, df - heroes[mx]) << endl;
        else if (max(0LL, max(0LL, getMin) + max(0LL, df - heroes[mi])) < max(0LL, max(0LL, getMax) + max(0LL, df - heroes[mx])))
            cout << max(0LL, max(0LL, getMin) + max(0LL, df - heroes[mi])) << endl;
        else cout << max(0LL, max(0LL, getMax) + max(0LL, df - heroes[mx])) << endl;
    }
    return 0;
}