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

#define MAX 1001

int dp[MAX][MAX];

int lcs(vi& a, vi& b)
{
    int n = a.size();
    int m = b.size();

    for (int i = 0; i<=n; ++i)
        dp[i][0] = 0;
    for (int i = 0; i<=m; ++i)
        dp[0][i] = 0;
    
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (a[i - 1] == b[j - 1] && ((i == 1 || dp[i - 2][j] == dp[i - 1][j]) && (j == 1 || dp[i][j - 2] == dp[i][j - 1])))
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    return dp[n][m];
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n,m; cin>>n>>m;
    vi a(n),b(m);
    for (int i = 0; i<n; ++i)
        cin>>a[i];
    for (int i = 0; i<m; ++i)
        cin>>b[i];
    cout<<lcs(a,b);
    return 0;
}