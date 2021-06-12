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

vi ans;

int knapsack(int N, int W, vvi& dp, vi& tracks)
{
    dp.assign(N + 1, vector<int>(W + 1,0));

    FOR(i,0,W+1) dp[0][i] = 0;
    FOR(i,1,N+1)
        FOR(j,0,W+1)
        {
            dp[i][j] = dp[i-1][j];
            if (j >= tracks[i - 1] && dp[i][j] < dp[i-1][j-tracks[i-1]] + tracks[i-1])
                dp[i][j] = dp[i-1][j - tracks[i-1]] + tracks[i-1];
        }
    return dp[N][W];
}

void trace(int N, int W, vvi& dp, vi& tracks)
{
    while (N > 0 && W > 0)
    {
        if (tracks[N - 1] <= W && dp[N][W] == dp[N-1][W - tracks[N-1]] + tracks[N-1])
        {
            ans.push_back(tracks[N-1]);
            W -= tracks[N-1];
        }
        N--;
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n;
    while(cin>>n)
    {
        int amount; cin>>amount;
        vi tracks(amount);
        vvi dp;
        FOR(i,0,amount) cin>>tracks[i];
        int sm = knapsack(amount,n,dp,tracks);
        trace(amount, n, dp, tracks);
        for(int i = ans.size() - 1; i>=0; --i)
            cout<<ans[i]<<" ";
        cout<<"sum:"<<sm<<endl;
        ans.clear();
    }
    return 0;
}