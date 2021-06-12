#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int w,h,n,m = 1, k = 1, ans = 1; cin>>w>>h>>n;
        while (w%2 == 0)
            ans+=m, m*=2, w/=2;
        while (h%2 == 0)
            ans+=m, m*=2, h/=2;
        if (ans >= n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}