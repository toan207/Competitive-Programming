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

const int MAX = 1e4 + 7;
int memo[MAX][2][101];
string s;
int n, D;

int dp(int i, int lss, int mod) {
    if (i == n) return (mod == 0);
    if (memo[i][lss][mod] != -1) return memo[i][lss][mod];
    int ans  = 0;
    for (int d = 0; d<10; ++d) {
        if (d > s[i] - '0' && !lss) break;
        ans += dp(i + 1, (lss | d < s[i] - '0'), (mod + d) % D);
        ans %= MOD;
    }
    return memo[i][lss][mod] = ans;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    memset(memo,-1,sizeof(memo));
    cin >> s >> D;
    n = s.length();
    cout << (dp(0, 0, 0) - 1 + MOD) % MOD << endl;
    return 0;
}