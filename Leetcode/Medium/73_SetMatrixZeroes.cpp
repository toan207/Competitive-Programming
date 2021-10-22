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
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        unordered_map<int, int> r,c;

        for (int i = 0; i<n; ++i)
            for (int j = 0; j<m; ++j)
                if (matrix[i][j] == 0)
                {
                    r[i] = 1;
                    c[j] = 1;
                }
        for (auto i: r)
            for (int j = 0; j<m; ++j)
                matrix[i.first][j] = 0;
        for (auto i: c)
            for (int j = 0; j<n; ++j)
                matrix[j][i.first] = 0;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vvi a = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    Solution().setZeroes(a);
    return 0;
}