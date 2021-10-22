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
    int T; cin>>T;
    while (T--) {
        int n; cin>>n;
        vi a(n), b(n), c(2*n + 1);
        FOR(i,0,n) {cin>>a[i]; c[a[i]] = i;}
        FOR(i,0,n) {cin>>b[i]; c[b[i]] = i;}
        int ans = INT_MAX;
        int mi = INT_MAX;
        FOR(i,1,2*n+1) {
            if (i%2) mi = min(mi, c[i]);
            else ans = min(ans, mi + c[i]);
        }
        cout << ans << endl;
    }
    return 0;
}