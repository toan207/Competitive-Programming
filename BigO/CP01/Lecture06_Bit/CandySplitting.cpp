#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    for (int _ = 1; _ <= t; ++_)
    {
        int n; cin>>n;
        unsigned long long xr = 0, sm = 0, mi = 1e7;
        cout<<sm<<endl;
        while (n--)
        {
            unsigned long long a; cin>>a;
            mi = min(mi,a);
            sm += a;
            xr ^= a;
        }
        if (xr)
            cout<<"Case #"<<_<<": NO"<<endl;
        else
            cout<<"Case #"<<_<<": "<<sm - mi<<endl;
    }
    return 0;
}