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
    ll n, cnt = 0, f = 0; cin >> n;
    map<int,ll> mp1, mp2;
    map<pii,ll> mp;
    for (int i = 0; i < n; ++i) {
        int x,y; cin >> x >> y;
        mp[{x,y}] += 1;
        mp1[x] += 1;
        mp2[y] += 1;
    }
    for (auto &i: mp1)
        cnt += ((i.second - 1)*(i.second))/2;
    for (auto &i: mp2)
        cnt += ((i.second - 1)*(i.second))/2;
    for (auto &i: mp)
        f += ((i.second - 1)*(i.second))/2;
    cout << cnt - f << endl;
    return 0;
}