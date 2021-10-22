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
    string S;
    cin >> S;
    int N = S.size();
    vector<vector<long long>> dp(N + 1, vector<long long>(9, 0));
    dp[0][0] = 1;
    string T = "chokudai";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            dp[i + 1][j] += dp[i][j];
            dp[i + 1][j] %= MOD;
            if (j < 8)
            {
                if (S[i] == T[j])
                {
                    dp[i + 1][j + 1] += dp[i][j];
                    dp[i + 1][j + 1] %= MOD;
                }
            }
        }
    }
    cout << dp[N][8] << endl;
    return 0;
}