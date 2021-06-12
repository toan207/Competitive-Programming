//https://codeforces.com/problemset/problem/1335/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t; cin>>t;
    while (t--)
    {
        ll n; cin>>n;
        if (n%2)
            cout<<n/2<<endl;
        else
            cout<<n/2 - 1<<endl;
        
    }
    return 0;
}