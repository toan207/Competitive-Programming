#include <bits/stdc++.h>
using namespace std;

int N,M,ans = 0;

void bfs(int x, int y, vector<vector<int> > &a)
{
    a[x][y] = -1;
    int mark = 4;
    if (x - 1 >=0 && (a[x-1][y] == 1 || a[x-1][y] == -1))
        mark--;
    if (x + 1 < N && (a[x+1][y] == 1 || a[x+1][y] == -1))
        mark--;
    if (y + 1 < M && (a[x][y+1] == 1 || a[x][y+1] == -1))
        mark--;
    if (y - 1 >=0 && (a[x][y-1] == 1 || a[x][y-1] == -1))
        mark--;
    ans += mark;
    if (x - 1 >=0 && a[x-1][y] == 1)
        bfs(x-1,y,a);
    if (x + 1 < N && a[x+1][y] == 1)
        bfs(x+1,y,a);
    if (y + 1 < M && a[x][y+1] == 1)
        bfs(x,y+1,a);
    if (y - 1 >=0 && a[x][y-1] == 1)
        bfs(x,y-1,a);
}

int main()
{
    cin>>N>>M;
    vector<vector<int> > a(N);
    for (int i = 0; i<N; ++i)
        for (int j = 0; j<M; ++j)
        {
            int x; cin>>x;
            a[i].push_back(x);
        }
    for (int i = 0; i<N; ++i)
        for (int j = 0; j<M; ++j)
            if (a[i][j] == 1)
                bfs(i,j,a);
    cout<<ans;
    return 0;
}