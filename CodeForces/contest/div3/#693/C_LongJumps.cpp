#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t; cin>>t;
    while (t--)
    {
        long long n; cin>>n;
        vector <long long> a(n);
        long long ans = 0;
        for (int i = 0; i<n; ++i) cin>>a[i];
        for (int i = n-2; i >= 0; i--)
        {
            long long temp = i + a[i];
            if (temp < n)
                a[i] += a[temp];
        }
        for (int i = 0; i<n; ++i)
            ans = max(ans, a[i]);
        cout<<ans<<endl;
    }
    return 0;
}