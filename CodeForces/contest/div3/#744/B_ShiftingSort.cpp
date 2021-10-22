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
        int n; cin >> n;
        vi a(n), b(n);
        FOR(i,0,n) {cin >> a[i]; b[i] = a[i];}
        sort(all(b));
        int f = 1;
        for (int i = 0; i < n; ++i)
            if (a[i] != b[i]) f = 0;
        if (f) {
            cout << 0 << endl;
            continue;
        }
        vvi ans;
        int pos = n - 1;
        for (int i = n; i >= 0 && pos; --i) {
            for (int j = 0; j < i; ++j) {
                if (a[j] == b[pos] && j != pos) {
                    reverse(a.begin() + j, a.begin() + pos + 1);
                    reverse(a.begin() + j, a.begin() + pos);
                    ans.push_back({j + 1, pos + 1, 1});
                    break;
                }
            }
            pos--;
        }
        cout << ans.size() << endl;
        for (auto& i: ans) cout << i[0] << " " << i[1] << " " << i[2] << endl;
    }
    return 0;
}