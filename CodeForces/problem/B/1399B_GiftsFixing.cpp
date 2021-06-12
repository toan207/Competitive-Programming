//https://codeforces.com/problemset/problem/1399/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<long long> a(n),b(n);
        long long miC = 10000000000 + 1, miO = 10000000000 + 1;
        for (int i = 0; i<n; ++i)
        {
            cin>>a[i];
            miC = min(a[i],miC);
        }
        for (int i = 0; i<n; ++i)
        {
            cin>>b[i];
            miO = min(b[i],miO);
        }
        long long ans = 0;
        for (int i = 0; i<n; ++i)
            ans += max(a[i] - miC, b[i] - miO);
        cout<<ans<<endl;
    }
    return 0;
}