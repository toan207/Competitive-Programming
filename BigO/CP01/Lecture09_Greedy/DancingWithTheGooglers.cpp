#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    for (int _ = 1; _ <= t; ++_)
    {
        int n,s,p, ans = 0; cin>>n>>s>>p;
        vector<int> a(n);
        for (int i = 0; i<n; ++i)
        {
            cin>>a[i];
            if (a[i] >= p*3-2)
                ans++;
            else if (a[i] >= p*3-4 && s > 0 && a[i] != 0)
                ans++, s--;
        }
        cout<<"Case #"<<_<<": "<<ans<<endl;
    }
    return 0;
}