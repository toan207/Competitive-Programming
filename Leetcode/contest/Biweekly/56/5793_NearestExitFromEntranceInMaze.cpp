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
    int X[4] = {0,0,1,-1};
    int Y[4] = {1,-1,0,0};
    const int MAX = 10000000;
    vector<vector<int>> check;
    void dfs(int x, int y, vector<vector<char>>& maze)
    {
        queue<vi> q;
        q.push({x,y});
        while (!q.empty())
        {
            int u = q.front()[0];
            int v = q.front()[1];
            maze[u][v] = 'X';
            q.pop();
            for (int i = 0; i<4; ++i)
                if (u + X[i] >= 0 && u + X[i] < maze.size() && v + Y[i] >= 0 && v + Y[i] < maze[u].size() && maze[u + X[i]][v + Y[i]] == '.' && check[u + X[i]][v + Y[i]] == MAX)
                {
                    q.push({u + X[i],v + Y[i]});
                    check[u + X[i]][v + Y[i]] = min(check[u][v]+1,check[u + X[i]][v + Y[i]]);
                }
        }
    }
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        check.assign(maze.size(),vector<int>());
        for (int i = 0; i<maze.size(); ++i)
            check[i].assign(maze[0].size(),MAX);
        check[entrance[0]][entrance[1]] = 0;

        dfs(entrance[0],entrance[1],maze);
        cout<<1;
        int mi = MAX;
        check[entrance[0]][entrance[1]] = MAX;
        for (int i = 0; i<maze.size(); ++i)
        {
            if (check[i][0] != MAX)
                mi = min(mi,check[i][0]);
            if (check[i][maze[0].size() - 1] != MAX)
                mi = min(mi,check[i][maze[0].size() - 1]);
        }
        for (int i = 0; i<maze[0].size(); ++i)
        {
            if (check[0][i] != MAX)
                mi = min(mi,check[0][i]);
            if (check[maze.size() - 1][i] != MAX)
                mi = min(mi,check[maze.size() - 1][i]);
        }
        for (int i = 0; i<maze.size(); ++i)
        {
            for (int j = 0; j<maze[i].size(); ++j)
                cout<<check[i][j]<<" ";
            cout<<endl;
        }
        for (int i = 0; i<maze.size(); ++i)
        {
            for (int j = 0; j<maze[i].size(); ++j)
                cout<<maze[i][j]<<" ";
            cout<<endl;
        }
        if (mi == MAX)
            return -1;
        return mi;
    }
};

int main()
{
    
    vector<vector<char>> a = {{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'}};
    vi b = {2,2};
    cout<<Solution().nearestExit(a,b)<<endl;
    return 0;
}