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
    int T; cin >> T;
    while (T--) {
        int a,b,c,m; cin >> a >> b >> c >> m;
        int sm = a + b + c, mx = max(max(a,b),c);
        if (a + b + c - 3 < m) cout << "NO" << endl;
        else {
            if (2*mx - sm - m <= 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }    
    return 0;
}