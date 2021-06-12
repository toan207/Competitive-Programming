//https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> ans;
        int mul = 1;
        while (n>0)
        {
            if (n%10)
                ans.push_back(mul * (n%10));
            n /= 10;
            mul *= 10;
        }
        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); ++i)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}