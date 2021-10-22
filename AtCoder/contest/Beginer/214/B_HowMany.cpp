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
    int S,T; cin>>S>>T;
    long long ans = 0;
    for (int i = 0; i<=S; ++i)
        for (int j = 0; j<=S; ++j)
            for (int k = 0; k<=S; ++k)
                if (i + j + k <= S && i * j * k <= T)
                    ans++;
    cout<<ans<<endl;
    return 0;
}