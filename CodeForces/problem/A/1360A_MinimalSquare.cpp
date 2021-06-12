//https://codeforces.com/problemset/problem/1360/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;
        if (a>b) swap(a,b);
        cout<<((2*a > b) ? (4*a*a) : (b*b))<<endl;
    }
    return 0;
}