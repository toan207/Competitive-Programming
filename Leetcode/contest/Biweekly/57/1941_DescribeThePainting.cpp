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
    vector<vector<long long>> splitPainting(vector<vector<int>>& segments) {
        long long p[100005] = {0};
        vector<bool> f(100005);
        int x = 0;
        vector<vector<long long> > ans;
        int mx = 0;
        for (int i = 0; i<segments.size(); ++i)
        {
            f[segments[i][0]] = true;
            p[segments[i][0]] += segments[i][2];
            p[segments[i][1]] += -1*segments[i][2];
            mx = max(mx, segments[i][1]);
        }
        
        for(int i = 1; i<100005; ++i)
        {
            p[i] += p[i-1];
            if (p[i] && !x)
                x = i;
            else if (p[i] != p[i-1] || f[i])
            {
                ans.push_back({x,i,p[i-1]});
                if (p[i] != 0)
                    x = i;
                else
                    x = 0;
            }
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vvi a = {{1,4,5},{4,7,7},{1,7,9}};
    Solution().splitPainting(a);
    return 0;
}