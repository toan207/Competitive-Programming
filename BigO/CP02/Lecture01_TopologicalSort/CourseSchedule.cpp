//https://cses.fi/problemset/submit/1679/
#include <bits/stdc++.h>
using namespace std;

vector<int> finishOrder;
vector<int> indegree;
vector<vector<int> > graph;
int n,m;

bool kahn ()
{
    queue<int> q;
    for (int i = 0; i<indegree.size(); ++i)
        if (indegree[i] == 0)
            q.push(i);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        finishOrder.push_back(u);
        for (int v: graph[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
                q.push(v);
        }
    }
    return finishOrder.size() == n;
}

int main()
{
    cin>>n>>m;
    graph.assign(n, vector<int>());
    indegree.assign(n, 0);
    for (int i = 0; i<m; ++i)
    {
        int a,b; cin>>a>>b;
        a--,b--;
        graph[a].push_back(b);
        indegree[b]++;
    }
    if (!kahn())
        cout<<"IMPOSSIBLE"<<endl;
    else
    {
        for (int i: finishOrder)
            cout<<i+1<<" ";
    }
    return 0;
}