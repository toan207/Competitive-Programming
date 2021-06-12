//https://codeforces.com/problemset/problem/1374/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long x,y,n; cin>>x>>y>>n;
        if (n%x == y)
            cout<<n<<endl;
        else if (!y)
            cout<<n - n%x<<endl;
        else if (n%x > y)
            cout<<n - (n%x - y)<<endl;
        else
            cout<<n - (n%x + x - y)<<endl;
    }
    return 0;
}