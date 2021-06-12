//https://codeforces.com/problemset/problem/1343/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        if ((n>>1)&1)
            cout<<"NO\n";
        else
        {
            int s=0;
            vector<int> a;
            for (int i = 1; i<=n/2; ++i)
            {
                a.push_back(i*2);
                s += i*2;
            }
            for (int i = 0; i<n/2; ++i)
            {
                if (i == n/2 - 1)
                {
                    a.push_back(s);
                    break;
                }
                a.push_back(i*2 + 1);
                s -= i*2 + 1;
            }
            cout<<"YES\n";
            for (int i = 0; i<a.size(); ++i) cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}