#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vvi vector<vector<int>>
#define vb vector<bool>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

const int MAX = 1e5 + 10;
vi graph[MAX];
vi low, num;
vb found;
stack<int> st;
int n,m;
int counter;

void dfs(int u)
{
    counter++;
    num[u] = low[u] = counter;
    st.push(u);

    for (int v: graph[u])
    {
        if (!found[v])
        {
            if (num[v] == 0)
                dfs(v);
            low[u] = min(low[u], low[v]);
        }
    }

    if (num[u] == low[u])
    {
        cout<<"Found a SCC: ";
        int v;
        do {
            v = st.top();
            st.pop();
            cout<<" "<<v;
            found[v] = true;
        }while(v != u);
        cout<<endl;
    }
}

void tarjan()
{
    counter = 0;
    low.assign(n + 1, 0);
    num.assign(n + 1, 0);
    found.assign(n + 1, false);
    st = stack<int>();

    for (int i = 1; i<=n; ++i)
        if (!num[i])
            dfs(i);
}

int main()
{

    cin>>n>>m;
    for(int u,v,i = 0; i<m; ++i)
    {
        cin>>u>>v;
        graph[u].push_back(v);
    }
    tarjan();

    return 0;
}