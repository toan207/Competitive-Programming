#include <bits/stdc++.h>
using namespace std;

int alp[26];

int findSet(int u)
{
    if (alp[u] != u)
        alp[u] = findSet(alp[u]);
    return alp[u];
}

void UnionSet(int u, int v)
{
    int pu = findSet(u);
    int pv = findSet(v);
    if (pu < pv)
        alp[pv] = pu;
    else
        alp[pu] = pv;
}

int main()
{
    string a,b,c; cin>>a>>b>>c;
    for (int i = 0; i<26; ++i) alp[i] = i;
    for (int i = 0; i<a.size(); ++i)
        UnionSet(a[i]-'a',b[i]-'a');
    for (int i = 0; i<c.size(); ++i)
        cout<<(char)(findSet(c[i]-'a') + 'a');
    return 0;
}