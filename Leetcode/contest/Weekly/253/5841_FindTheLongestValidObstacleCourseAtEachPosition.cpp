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
    void LIS (vector<int> &a, vector<int>& dp)
    {
        int n = a.size();
        vector<int> lis;
        dp.assign(n, 1);
        for (int j, i = 0; i < n; ++i)
        {
            j = upper_bound(lis.begin(), lis.end(), a[i]) - lis.begin();
            dp[i] = j + 1;
            if (j == lis.size())
                lis.push_back(a[i]);
            else
                lis[j] = a[i];
        }
    }
    vector<int> longestObstacleCourseAtEachPosition(vector<int>& obstacles) {
        vector<int> dp;
        LIS(obstacles, dp);
        return dp;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}