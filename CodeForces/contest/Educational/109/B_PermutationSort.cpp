//https://codeforces.com/contest/1525/problem/B
#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T; cin>>T;
    while(T--)
    {
        int n; cin>>n;
        vi a(n);
        int f;
        FOR(i,0,n) cin>>a[i];
        if (a[0] == 1 || a[n-1] == n)
            f = 1;
        else if (a[n-1] == 1 && a[0] == n)
            f = 3;
        else
            f = 2;
        int m = 0;
        FOR(i,1,n)
            if (a[i] < a[i-1])
            {
                m = 1;
                break;
            }
        if (m)
            cout<<f<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}