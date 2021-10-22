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
#define all(a) a.begin(),a.end()
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
        int a,b,c; cin>>a>>b>>c;
        int cir = abs(b-a)*2, dis = abs(b-a);
        int d;
        if (c > cir/2) d = c - dis;
        else d = c + dis;
        if (cir >= max(a,b) && max(d,c) <= cir && d != c && a != b) cout<<d<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}