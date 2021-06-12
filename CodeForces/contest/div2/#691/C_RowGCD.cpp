#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    vector<unsigned long long> a(n),b(m);
    for (int i = 0; i<n; ++i) cin>>a[i];
    for (int i = 0; i<m; ++i) cin>>b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());    
    for (int i = 0; i<m; ++i)
    {
        int f = 1;
        unsigned long long mark = (a[1] + b[0]) % (a[0] + b[0]);
        for (int j = 2; j<n; ++j)
        {
            int a;
        }
    }
    return 0;
}//wrong