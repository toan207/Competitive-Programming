#include <bits/stdc++.h>
using namespace std;

int DFS(int s, vector<int> &dist, vector<vector<int> > &graph)
{
    dist[s] = 0;
    int count[2] = {0};
    queue<int> Q;
    Q.push(s);
    while (!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for (int i = 0; i<graph[u].size(); ++i)
        {
            if (dist[graph[u][i]] == -1)
            {
                dist[graph[u][i]] = dist[u] + 1;
                count[dist[graph[u][i]] % 2]++;
                Q.push(graph[u][i]);
            }
        }
    }
    return max(count[0] + 1, count[1]);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    for (int _ = 1; _ <= t; ++_)
    {
        int n,res=0, mx=0; cin>>n;
        vector<vector<int> > graph(int(1e5), vector<int>(0));
        vector<int> dist(int(3 * 1e4), -2);

        while (n--)
        {
            int A,B; cin>>A>>B;
            graph[A].push_back(B);
            graph[B].push_back(A);
            mx = max(mx, max(A,B));
            dist[A] = -1;
            dist[B] = -1;
        }
        
        for (int i = 0; i<mx; ++i)
            if (dist[i] == -1)
                res += DFS(i, dist, graph);
        
        cout<<"Case "<<_<<": "<<res<<endl;
    }
    return 0;
}