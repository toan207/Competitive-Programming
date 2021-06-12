#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m, border = 0, X[4] = {0,0,1,-1}, Y[4] = {1,-1,0,0};
    string mp[101];
    cin>>m>>n;
    for (int i = 0; i<n; ++i)
        cin>>mp[i];
    for (int x = 0; x<n; ++x)
        for (int y = 0; y<m; ++y)
                for (int i = 0; i<4; ++i)
                    if (x + X[i] >= 0 && x + X[i] < n && y + Y[i] >= 0 && y + Y[i] < m && mp[x + X[i]][y + Y[i]] != mp[x][y])
                        border++;
    cout<<border/2<<endl;
}