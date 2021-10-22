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
    while(T--)
    {
        int N; cin>>N;
        ll sm = 0, mx = -1e10;
        for (int i = 0; i<N; ++i)
        {
            ll a; cin>>a;
            mx = max(mx, a);
            sm += a;
        }
        sm -= mx;
        double ans = (double)sm/(N-1) + mx;
        cout<<fixed<<setprecision(9)<<ans<<endl;
    }
    return 0;
}