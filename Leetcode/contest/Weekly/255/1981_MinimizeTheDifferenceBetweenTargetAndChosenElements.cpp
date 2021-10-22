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
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        const int MAX = 70*70+1;
        vector<bool> dp(MAX);
        dp[0] = true;
        for (int i = 0; i<mat.size(); ++i)
            for (int x = MAX - 1; x>=0; --x)
            {
                if (dp[x]) for (int j: mat[i]) dp[x + j] = true;
                dp[x] = false;
            }
        int mi = 70*70;
        for (int i = 0; i<MAX; ++i) if (dp[i]) mi = min(mi, abs(target - i));
        return mi;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}