#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int T; cin>>T;
    while (T--)
    {
        int n, g, nw, ans = 0; cin>>n;
        int dp[31] = {0};
        for (int i = 0; i<n; ++i)
        {
            int pr,w; cin>>pr>>w;
            for (int i = 30; i>=w; --i)
                dp[i] = max(dp[i - w] + pr, dp[i]);
        }
        cin>>g;
        while(g--)
        {
            cin>>nw;
            ans += dp[nw];
        }
        cout<<ans<<endl;
    }
    return 0;
}