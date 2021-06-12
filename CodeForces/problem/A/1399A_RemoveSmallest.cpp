// https://codeforces.com/problemset/problem/1399/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        vector<int> s;
        int n; cin>>n;
        while (n--)
        {
            int z; cin>>z;
            s.push_back(z);
        }
        sort(s.begin(),s.end());
        int f = 1;
        for (int i=1; i<s.size();++i)
        {
            if (s[i] - s[i-1] > 1)
            {
                cout<<"NO\n";
                f = 0;
                break;
            }
        }
        if (f)
            cout<<"YES\n";
    }
    return 0;
}