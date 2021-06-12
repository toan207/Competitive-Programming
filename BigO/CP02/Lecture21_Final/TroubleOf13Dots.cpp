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
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,m;
    while(cin>>n>>m)
    {
        int mark = n + 200*(n>1800);
        vl dp(mark + 1, 0);
        FOR(i,0,m)
        {
            int pr,fv; cin>>pr>>fv;
            for (int x = mark; x>=pr; --x)
                if (dp[x - pr] > 0 || x == pr)
                    dp[x] = max(dp[x], dp[x-pr] + fv);
        }
        ll mx = 0;
        FOR(i,0,n+1)
            mx = max(dp[i],mx);
        FOR(i,2001,mark + 1)
            mx = max(dp[i],mx);
        cout<<mx<<endl;
    }
    return 0;
}