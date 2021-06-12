//https://codeforces.com/problemset/problem/1353/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n,k, s=0; cin>>n>>k;
        vector<int> a(n),b(n);
        for (int i = 0; i<n; ++i) {cin>>a[i]; s+=a[i];}
        for (int i = 0; i<n; ++i) cin>>b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, j = n-1;
        while (a[i] < b[j] && k--)
        {
            s -= a[i];
            s += b[j];
            swap(a[i],b[j]);
            i++, j--;
        }
        cout<<s<<endl;
    }
    return 0;
}