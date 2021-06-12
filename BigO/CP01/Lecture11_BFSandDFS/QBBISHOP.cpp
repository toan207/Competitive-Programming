#include <bits/stdc++.h>
using namespace std;

long long board[202][202], MAX = 1e10;
int X[4] = {-1,1,1,-1};
int Y[4] = {-1,1,-1,1};

void bfs(int x, int y)
{
    queue<pair<int,int> > q;
    q.push(make_pair(x,y));
    while (!q.empty())
    {
        int u = q.front().first, v = q.front().second;
        q.pop();
        long long t = board[u][v] + 1;
        long long uu = u + X[0], vv = v + Y[0];
        while (board[uu][vv] != -1)
        {
            if (board[uu][vv] > t)
            {
                board[uu][vv] = t;
                q.push(make_pair(uu,vv));
            }
            uu += X[0], vv += Y[0];
        }
        uu = u + X[1], vv = v + Y[1];
        while (board[uu][vv] != -1)
        {
            if (board[uu][vv] > t)
            {
                board[uu][vv] = t;
                q.push(make_pair(uu,vv));
            }
            uu += X[1], vv += Y[1];
        }
        uu = u + X[2], vv = v + Y[2];
        while (board[uu][vv] != -1)
        {
            if (board[uu][vv] > t)
            {
                board[uu][vv] = t;
                q.push(make_pair(uu,vv));
            }
            uu += X[2], vv += Y[2];
        }
        uu = u + X[3], vv = v + Y[3];
        while (board[uu][vv] != -1)
        {
            if (board[uu][vv] > t)
            {
                board[uu][vv] = t;
                q.push(make_pair(uu,vv));
            }
            uu += X[3], vv += Y[3];
        }
    }
}

int main()
{
    int n,m,p,q,s,t; cin>>n>>m>>p>>q>>s>>t;
    for (int i = 0; i<202; ++i)
        for (int j = 0; j<202; ++j)
        {
            if (i == 0 || j == 0 || i > n || j > n)
                board[i][j] = -1;
            else
                board[i][j] = MAX;
        }
    for (int i = 0; i<m; ++i)
    {
        int x,y; cin>>x>>y;
        board[x][y] = -1;
    }
    board[p][q] = 0;
    bfs(p,q);
    if (board[s][t] == MAX)
        cout<<-1;
    else
        cout<<board[s][t];
    return 0;
}