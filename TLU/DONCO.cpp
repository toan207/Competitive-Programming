#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define nl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,k,x = 0, y = 0; cin>>n>>k;
    ll ans = 1e18, mark;
    vector<ll> v(n);
    for (int i = 0; i<n; ++i) cin>>v[i];
    sort(v.begin(), v.end());
    for (int i = k - 1; i<n; ++i)
    {
        if ((v[i] > 0 && v[x] > 0) || v[x] == v[i])
            mark = max(abs(v[x]), abs(v[i]));
        else
            mark = max((ll)0,v[i]) + abs(v[x]) + (v[i] > 0 && v[x] < 0)*min(v[i], abs(v[x]));
        ans = min(mark, ans);
        y++,x++;
    }
    cout<<ans;
    return 0;
}