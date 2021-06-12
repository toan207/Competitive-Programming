#include <bits/stdc++.h>
using namespace std;

bool check(int n, long long num, vector<int> a)
{
    long long t = 0;
    for (int i=0; i<n; ++i)
    {
        t += a[i];
        if (t > num)
            return false;
        if (t == num)
            t = 0;
    }
    return true;
}

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        long long su = 0;
        vector<int> a(n);
        for(int i=0; i<n;++i)
        {
            cin>>a[i];
            su += a[i];
        }
        for(int i=n;i>0;--i)
        {
            if (su%i == 0 && check(n,su/i,a))
            {
                cout<<n-i<<endl;
                break;
            }
        }
    }
    return 0;
}