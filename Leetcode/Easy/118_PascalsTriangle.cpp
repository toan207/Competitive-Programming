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
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if (n > 1) ans.push_back({1,1});
        for (int i = 2; i < n; ++i) {
            vector<int> tmp;
            tmp.push_back(1);
            for (int j = 1; j < ans.size(); ++j) {
                tmp.push_back(ans[i-1][j-1] + ans[i-1][j]);
            }
            tmp.push_back(1);
            ans.push_back(tmp);
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