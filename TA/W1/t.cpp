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

ll maxsub4 (vl &a, int N) {
    ll maxsum = a[0];
    ll e = a[0];
    for (int i = 1; i < N; i++) {
        e = max(a[i], e + a[i]);
        maxsum = max (maxsum, e);
    }
    return maxsum;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N; cin>>N;
    vl a(N);
    FOR(i,0,N) cin>>a[i];
    cout<<maxsub4(a,N)<<endl;
    return 0;
}