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
    bool isValidSudoku(vector<vector<char>>& board) {
        int R[9][10] = {0}, C[9][10] = {0}, Box[9][10] = {0};
        for (int i = 0; i<9; ++i)
            for (int j = 0; j<9; ++j)
                if (board[i][j] != '.' && (C[j][board[i][j] - '0']++ || R[i][board[i][j] - '0']++ || Box[i / 3 * 3 + j / 3][board[i][j] - '0'] ++)) 
                    return false;
        return true;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}