#include <bits/stdc++.h>
using namespace std;

int C,n,h;
vector<int> app, ind, finishOrder;
vector<vector<int>> graph;
queue<int> q;

int kahn()
{
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        finishOrder.push_back(u);
        for (int v: graph[u])
            if (--ind[v] == 0)
                q.push(v);
        if (q.size()>1)
            return -1;
    }
    return finishOrder.size() == n;
}

int main()
{
    cin>>C;
    while(C--)
    {
        cin>>n>>h;
        app.clear(); ind.clear(); graph.clear();
        app.assign(n,0); ind.assign(n,0); graph.assign(n,vector<int>());
        for (int i = 0; i<h; ++i)
        {
            int a,b; cin>>a>>b;
            graph[a-1].push_back(b-1);
            ind[b-1]++;
        }
        int f = 0;
        for (int i = 0; i<n; ++i)
            if (ind[i] == 0)
                {
                    q.push(i);
                    f++;
                }
        int check = kahn();
        if (f!=1 || check==-1)
            cout<<"missing hints"<<endl;
        else if(!check)
            cout<<"recheck hints"<<endl;
        else
        {
            for (int i: finishOrder)
                cout<<i+1<<" ";
            cout<<endl;
        }
        while (!q.empty())
            q.pop();
    }
}