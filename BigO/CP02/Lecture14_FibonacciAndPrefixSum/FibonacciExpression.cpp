#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define nl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n; cin>>n;
    ll f[100001];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i<=n+1; i++)
        f[i] = f[i-1] + f[i-2];
    cout<<f[n+1]*f[n-1] - f[n]*f[n];
    return 0;
}