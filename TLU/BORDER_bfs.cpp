#include <bits/stdc++.h>
using namespace std;

int n,m,markX,markY, border = 0;
int X[4] = {0,0,1,-1};
int Y[4] = {1,-1,0,0};
vector<vector<char> > mp;

void bfs(int x, int y)
{
    mp[x][y] = 'X';
    for (int i = 0; i<4; ++i)
        if (x + X[i] >= 0 && x + X[i] < n && y + Y[i] >= 0 && y + Y[i] < m && mp[x + X[i]][y + Y[i]] == 'B')
            border++;
    for (int i = 0; i<4; ++i)
        if (x + X[i] >= 0 && x + X[i] < n && y + Y[i] >= 0 && y + Y[i] < m && mp[x + X[i]][y + Y[i]] == 'A')
            bfs(x + X[i], y + Y[i]);
}

int main()
{
    cin>>m>>n;
    mp.assign(m, vector<char>());
    for (int i = 0; i<n; ++i)
        for (int j = 0; j<m; ++j)
        {
            char x; cin>>x;
            mp[i].push_back(x);
            if (x == 'A')
                markX = i, markY = j;
        }
    bfs(markX,markY);
    cout<<border<<endl;
    return 0;
}