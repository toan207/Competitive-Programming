#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mark = 0, ans = 1000; cin>>n;
    vector<char> a(n);
    for (int i = 0; i<n; ++i) {cin>>a[i]; if (a[i]=='H') mark++;}
    for (int i = 0; i<2*n; ++i)
    {
        int m = 0;
        for (int j = 0; j<mark; ++j)
            if (a[(i+j)%n] == 'T') m++;
        ans = min(ans, m);
    }
    cout<<ans;
    return 0;
}