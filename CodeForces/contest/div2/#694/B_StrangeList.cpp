#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,x, ans = 0; cin>>n>>x;
        vector<long long> a(n);
        for (int i = 0; i<n; ++i) {cin>>a[i]; ans += a[i];}
        long long mark = x;
        bool f = true;
        while (f)
        {
            for (int i = 0; i<n; ++i)
            {
                if (a[i]%x == 0)
                {
                    a[i] /= x;
                    ans += a[i] * mark;
                }
                else
                {
                    f = false;
                    break;
                }
            }
            mark *= x;
        }
        cout<<ans<<endl;
    }
    return 0;
}