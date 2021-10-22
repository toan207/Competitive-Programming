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
    int n, sm = 0; cin>>n;
    vi dis;
    FOR(i,0,2*n)
    {
        int a,b; cin>>a>>b;
        sm += a;
        dis.push_back(b-a);
    }
    SORT(dis);
    sm += accumulate(dis.begin(), dis.begin() + n, 0);
    cout<<sm<<endl;
    return 0;
}