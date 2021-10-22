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

class Solution {
public:
    int dp[15][15];
    int findLen(string &s) {
        int n = (int) s.size();
        string rev = s;
        reverse(rev.begin(), rev.end());
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                if (s[i - 1] == rev[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1; 
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); 
        return dp[n][n];
    }
    int maxProduct(string s) {
        int n = (int) s.size(); 
        int ans = 0; 
        for (int mask = 0; mask < (1 << n); mask++)
        {
            string s1 = "";
            string s2 = "";
            for (int i = 0; i < n; i++)
                if ((mask & (1 << i)) > 0) s1 += s[i];
                else s2 += s[i]; 
            int len1 = findLen(s1);
            int len2 = findLen(s2); 
            ans = max(ans, len1 * len2);
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}