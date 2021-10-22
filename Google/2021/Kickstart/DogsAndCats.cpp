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
    int T, cs = 1; cin >> T;
    while (T--) {
        long long N, C, D, M; cin >> N >> D >> C >> M;
        int f = 1;
        string s; cin >> s;
        int cntD = 0;
        for (char x: s) cntD += x == 'D';
        for (char x: s) {
            if (!cntD) break;
            else if (x == 'C' && C > 0) C--;
            else if (x == 'D' && D > 0) {
                D--;
                cntD--;
                C += M;
            }
            else {
                f = 0;
                break;
            }
        }
        cout << "Case #" << cs << ": ";
        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
        cs++;
    }
    return 0;
}