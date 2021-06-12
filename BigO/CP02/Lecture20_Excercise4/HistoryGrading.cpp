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
    string s;
    int n;
    vi ans;
    while(getline(cin,s))
    {
        stringstream ss(s);
        if (s.size() < 3)
        {
            ss>>n;
            ans.clear();
            getline(cin,s);
            ans.assign(n, 0);
            int a;
            int r = 1;
            stringstream sa(s);
            while(sa>>a)
                ans[a - 1] = r++;
            continue;
        }
        vi points(n);
        int p, r = 1;
        while (ss>>p)
            points[p - 1] = r++;
        int dp[22][22];
        for (int i = 0; i<=n; ++i)
        {
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        for (int i = 1; i<=n; ++i)
            for (int j = 1; j<=n; ++j)
                if (points[j - 1] == ans[i - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        cout<<dp[n][n]<<endl;
    }
    return 0;
}