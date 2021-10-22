//https://codeforces.com/contest/1525/problem/D
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
    while (T--)
    {
        int n,x; cin>>n>>x;
        vi a(n);
        FOR(i,0,n) cin>>a[i];
        char move;
        vi R,L;
        FOR(i,0,n)
        {
            cin>>move;
            if (move == 'R')
                R.push_back(a[i]);
            else
                L.push_back(a[i]);
        }
        SORT(R);
        SORT(L);
        int i = 0, j = 0;
        while (i != R.size() && j != L.size())
        {
            
        }
    }
    return 0;
}