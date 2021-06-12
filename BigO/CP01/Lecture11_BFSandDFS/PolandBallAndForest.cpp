#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tree = 0; cin>>n;
    vector<int> a(n+1), visited(n+1);
    for (int i = 0; i<n; ++i) cin>>a[i];
    for (int i = 0; i<n; ++i)
    {
        if (visited[a[i]-1]) continue;
        tree++;
        visited[a[i]-1] = 1;
        visited[a[a[i]-1]-1] = 1;
    }
    cout<<tree;
    return 0;
}