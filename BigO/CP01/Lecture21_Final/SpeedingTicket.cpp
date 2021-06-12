#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int main()
{
    int n,m; cin>>n>>m;
    vector<pii> p,b;
    for (int i = 0; i<n; ++i)
    {
        int u,v; cin>>u>>v;
        p.push_back({u,v});
    }
    for (int i = 0; i<m; ++i)
    {
        int u,v; cin>>u>>v;
        b.push_back({u,v});
    }
    int i = 0, j = 0, ma = 0;
    while (i < n && j < m)
    {
        ma = max(ma, b[j].second - p[i].second);
        if (p[i].first > b[j].first)
        {
            p[i].first -= b[j].first;
            j++;
        }
        else if (p[i].first < b[j].first)
        {
            b[j].first -= p[j].first;
            i++;
        }
        else
        {
            i++,j++;
        }
    }
    cout<<ma;
    return 0;
}