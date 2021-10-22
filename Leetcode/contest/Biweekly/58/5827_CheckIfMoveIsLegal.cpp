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
    bool checkMove(vector<vector<char>>& board, int rMove, int cMove, char color) {
        if (cMove >= 1 && board[rMove][cMove - 1] != color && board[rMove][cMove - 1] != '.')
        {
            for (int i = cMove - 2; i >= 0; --i)
                if (board[rMove][i] == '.')
                    break;
                else if (board[rMove][i] == color)
                    return true;
        }
        if (cMove < 6 && board[rMove][cMove + 1] != color && board[rMove][cMove + 1] != '.')
        {
            for (int i = cMove + 2; i < 8; ++i)
                if (board[rMove][i] == '.')
                    break;
                else if (board[rMove][i] == color)
                    return true;
        }
        if (rMove >= 1 && board[rMove - 1][cMove] != color && board[rMove - 1][cMove] != '.')
        {
            for (int i = rMove - 2; i >= 0; --i)
                if (board[i][cMove] == '.')
                    break;
                else if (board[i][cMove] == color)
                    return true;
        }
        if (rMove < 6 && board[rMove + 1][cMove] != color && board[rMove + 1][cMove] != '.')
        {
            for (int i = rMove + 2; i < 8; ++i)
            {
                if (board[i][cMove] == '.')
                    break;
                else if (board[i][cMove] == color)
                    return true;
            } 
        }
        if (rMove >= 1 && cMove >= 1 && board[rMove - 1][cMove - 1] != color && board[rMove - 1][cMove - 1] != '.')
        {
            for (int i = rMove - 2, j = cMove - 2; i >= 0 && j >= 0; --i, --j)
            {
                if (board[i][j] == '.')
                    break;
                else if (board[i][j] == color)
                    return true;
            }
        }
        if (rMove < 6 && cMove < 6 && board[rMove + 1][cMove + 1] != color && board[rMove + 1][cMove + 1] != '.')
        {
            for (int i = rMove + 2, j = cMove + 2; i < 8 && j < 8; ++i, ++j)
                if (board[i][j] == '.')
                    break;
                else if (board[i][j] == color)
                    return true;
        }
        if (rMove < 6 && cMove >= 1 && board[rMove + 1][cMove - 1] != color && board[rMove + 1][cMove - 1] != '.')
        {
            for (int i = rMove + 2, j = cMove - 2; i < 8 && j >= 0; ++i, --j)
            {
                if (board[i][j] == '.')
                    break;
                else if (board[i][j] == color)
                    return true;
            }
        }
        if (rMove >= 1 && cMove < 6 && board[rMove - 1][cMove + 1] != color && board[rMove - 1][cMove + 1] != '.')
        {
            for (int i = rMove - 2, j = cMove + 2; i >= 0 && j < 8; --i, ++j)
                if (board[i][j] == '.')
                    break;
                else if (board[i][j] == color)
                    return true;
        }
        return false;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vector< vector <char> > a = 
        {
        {'B','W','W','.','B','B','.','.'},
        {'W','.','.','.','W','W','W','B'},
        {'B','W','W','.','.','W','B','B'},
        {'.','.','W','B','.','.','.','W'},
        {'.','W','W','.','W','B','.','.'},
        {'.','W','B','B','B','B','.','B'},
        {'.','W','B','W','B','W','.','B'},
        {'W','.','W','.','W','.','B','.'}}
;
    cout<<Solution().checkMove(a, 5,6,'B');
    return 0;
}