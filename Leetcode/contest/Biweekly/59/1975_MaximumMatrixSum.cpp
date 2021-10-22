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
    long long MatrixSum(vector<vector<int>>& matrix)
    {
        long long sm = 0;
        for (int i = 0; i<matrix.size(); ++i)
            for (int j = 0; j<matrix[0].size(); ++j)
                sm += matrix[i][j];
        return sm;
    }
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int sm = 0, mi = INT_MAX, mx = -1e6;
        for (int i = 0; i<matrix.size(); ++i)
            for (int j = 0; j<matrix[0].size(); ++j)
                if (matrix[i][j] < 0)
                {
                    sm++; mx = max(mx,matrix[i][j]);
                    matrix[i][j] *= -1;
                }
                else mi = min(mi,matrix[i][j]);
        if (!(sm%2)) return MatrixSum(matrix);
        if (mi > mx*-1) return MatrixSum(matrix) + mx*2;
        return MatrixSum(matrix) - mi*2;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}