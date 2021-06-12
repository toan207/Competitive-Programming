#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<long long> a(n),ans;
        for (int i=0;i<n;++i) cin>>a[i];
        int i=0,j=n-1;
        while (i<j)
        {
            ans.push_back(a[i]);
            ans.push_back(a[j]);
            i++,j--;
        }
        if (n&1) ans.push_back(a[i]);
        for (i=0;i<n;++i) cout<<ans[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}