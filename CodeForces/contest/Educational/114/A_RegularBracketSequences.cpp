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

int n;

void gen(int l, int r, string s) {
    if (n == 0) return;
    if (!l && !r && n) {
        n--;
        cout << s << endl;
        return;
    }
    if (l) gen(l - 1, r + 1, s + '(');
    if (r) gen(l, r - 1, s + ')');
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T; cin>>T;
    while (T--)
    {
        cin >> n;
        gen(n, 0, "");
    }
    return 0;
}