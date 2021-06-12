#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,K,ans = 0;
    cin>>N>>K;
    queue<int> q;
    vector<int> ind,deq,a(N),nex;
    deq.assign(N,0);
    nex.assign(N,0);
    ind.assign(N,0);
    for (int i = 0; i<N; i++)
    {
        cin>>a[i];
        a[i]--;
        nex[i] = a[i];
        ind[a[i]] += 1;
    }
    if (a[0] != 0)
    {
        ans++;
        ind[a[0]]--;
        a[0] = 0;
        nex[0] = 0;
    }
    for (int i = 1; i<N; i++)
    {
        if (ind[i] == 0)
            q.push(i);
    }
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        if (u == 0)
            break;
        if (nex[u]!=0 && deq[u]==K-1)
            ans++;
        else
            deq[nex[u]] = max(deq[nex[u]], deq[u] + 1);
        ind[nex[u]]--;
        if (ind[nex[u]] == 0)
            q.push(nex[u]);
    }
    cout<<ans<<endl;
}