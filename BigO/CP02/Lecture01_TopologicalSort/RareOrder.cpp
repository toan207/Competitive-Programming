#include <bits/stdc++.h>
using namespace std;

vector<int> visited, appear, finishOrder;
vector<vector<int> > graph;

void dfs(int u)
{
    visited[u] = 1;
    for (int i: graph[u])
        if (!visited[i] && appear[i])
            dfs(i);
    finishOrder.push_back(u);
}

int main()
{
    visited.assign(30,0);
    appear.assign(30,0);
    graph.assign(30, vector<int>());
    string pre, nex;
    cin>>pre;
    while (nex != "#")
    {
        cin>>nex;
        if (nex == "#")
            break;
        for (int i = 0; i<pre.size() && i<nex.size(); ++i)
        {
            if (pre[i] != nex[i])
            {
                graph[pre[i] - 'A'].push_back(nex[i] - 'A');
                appear[pre[i] - 'A'] = 1;
                appear[nex[i] - 'A'] = 1;
                break;
            }
        }
        pre = nex;
    }
    for (int i = 0; i<30; ++i)
        if (!visited[i] && appear[i])
            dfs(i);
    for (int i = finishOrder.size() - 1; i >= 0; --i)
        cout<<(char)(finishOrder[i] + 'A');
}