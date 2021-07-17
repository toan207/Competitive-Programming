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

int n,m;
long long dp[401][401];
ll ans = 0;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for (int i = 0; i<=n; ++i)
        for (int j = 0; j<=n; ++j)
            dp[i][j] = (ll)MOD;

    for (int i = 0; i<=n; ++i)
        dp[i][i] = 0;
    
    for (int i = 0; i<m; ++i)
    {
        int x,y; cin>>x>>y;
        cin>>dp[x][y];
    }
    
    for (int k = 1; k<=n; ++k)
    {
        long long dp1[401][401]= {0};
        for (int i = 0; i<=n; ++i)
            for (int j = 0; j<=n; ++j)
            {
                dp1[i][j] = min(dp[i][k] + dp[k][j], dp[i][j]);
                if (dp1[i][j] < (ll)MOD)
                    ans += dp1[i][j];
            }
        for (int i = 0; i<=n; ++i)
            for (int j = 0; j<=n; ++j) 
                dp[i][j] = dp1[i][j];
    }
    
    cout<<ans<<endl;
    return 0;
}