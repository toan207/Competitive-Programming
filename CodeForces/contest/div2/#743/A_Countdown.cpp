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
    while(T--) {
        int n; cin>>n;
        string s; cin>>s;
        int ans = 0;
        for (int i = 0; i<n; ++i) 
            if (i != n - 1 && s[i] != '0')
                ans += s[i] - '0' + 1;
            else
                ans += s[i] - '0';
        cout << ans << endl;
    }
    return 0;
}