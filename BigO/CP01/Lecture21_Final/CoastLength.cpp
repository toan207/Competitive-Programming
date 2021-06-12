#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
int X[4] = {-1,0,0,1};
int Y[4] = {0,1,-1,0};
int n,m;
char beach[1001][1001];
void bfs(int x, int y)
{
    beach[x][y] = '.';
    for (int i = 0; i<4; ++i)
        if (x + X[i] < n && x + X[i] >= 0 && y + Y[i] < m && y + Y[i] >= 0 && beach[x + X[i]][y + Y[i]] == '0')
            bfs(x+X[i], y+Y[i]);
}

int main()
{
    cin>>n>>m;
    for (int i = 0; i<n; i++)
        for (int j = 0; j<m; j++)
            cin>>beach[i][j];
    for (int i = 0; i<n; i++)
    {
        if (beach[i][0] == '0')
            bfs(i,0);
        if (beach[i][m-1] == '0')
            bfs(i,m-1);
    }
    for (int i = 0; i<m; i++)
    {
        if (beach[0][i] == '0')
            bfs(0,i);
        if (beach[n-1][i] == '0')
            bfs(n-1,i);
    }
    // for (int i = 0; i<n; i++)
    // {
    //     for (int j = 0; j<m; j++)
    //         cout<<beach[i][j];
    //     cout<<endl;
    // }
    long long km = 0;
    for (int i = 0; i<n; i++)
        for (int j = 0; j<m; j++)
        {
            if (beach[i][j] != '.')
            {
                if (j == 0 || beach[i][j-1] == '.')
                km++;
                if (j == m-1 || beach[i][j+1] == '.')
                    km++;
                if (i == 0 || beach[i-1][j] == '.')
                    km++;
                if (i == n-1 || beach[i+1][j] == '.')
                    km++;
            }
        }
    cout<<km;
    return 0;
}