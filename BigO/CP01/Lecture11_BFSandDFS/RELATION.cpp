#include <bits/stdc++.h>
using namespace std;

bool dfs(int n, vector<vector <int> > graph)
{
    stack<int> s;
    s.push(n);
    vector<int> vis(int(1e5) + 1);
    while (!s.empty())
    {
        vis[s.top()] = 1;
        int u = s.top(), f = 1;
        s.pop();
        for (int i = 0; i<graph[u].size(); ++i)
        {
            if (!vis[graph[u][i]])
            {
                vis[graph[u][i]] = 1;
                s.push(graph[u][i]);
            }
            else
            {
                f = 0;
                break;
            }
        }
        if (!f)
            return false;
    }
    return true;
}

int main()
{
    int t = 3;
    while (t--)
    {
        int N,M,x,y,mark,f=1; cin>>N>>M;
        vector<int> check(int(1e5) + 1);
        vector<vector <int> > graph(int(1e5) + 1);
        cin>>x>>y;
        mark = x;
        graph[x].push_back(y);
        check[y]++;
        for (int i = 0; i<M-1; ++i)
        {
            cin>>x>>y;
            graph[x].push_back(y);
            if (check[y])
            {
                f = 0;
            }
            check[y]++;
        }
        if (f && dfs(mark, graph))
            cout<<1;
        else
            cout<<0;
    }
    return 0;
}