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
        int n,m,k, f = 0; cin >> n >> m >> k;
        string s[20];
        for (int i = 0; i<n; ++i) cin >> s[i];
        for (int i = 0; i<n; ++i) {
            for (int j = 0; j<m; ++j) {
                if (s[i][j] == '*') {
                    int c1 = 0, c2 = 0;
                    f = 0;
                    for (int x = 1;true; ++x) {
                        if (i - x >= 0 && j - x >= 0 && (s[i - x][j - x] == '*' || s[i - x][j - x] == 'x')) c1++;
                        else break;
                    }
                    for (int x = 1;true; ++x) {
                        if (i - x >= 0 && j + x < m && (s[i - x][j + x] == '*' || s[i - x][j + x] == 'x')) c2++;
                        else break;
                    }
                    if (c2 >= k && c1 >= k) f = 1;
                    if (f) {
                        for (int x = 0; x<min(c1,c2) + 1; ++x) {
                            if (i - x >= 0 && j - x >= 0 && s[i - x][j - x] == '*') s[i - x][j - x] = 'x';
                        }
                        for (int x = 0; x<min(c1,c2) + 1; ++x) {
                            if (i - x >= 0 && j + x < m && s[i - x][j + x] == '*') s[i - x][j + x] = 'x';
                        }
                    }
                }
            }
        }
        f = 1;
        for (int i = 0; i<n; ++i)
            for (int j = 0; j<m; ++j)
                if (s[i][j] == '*') {
                    f = 0;
                    break;
                }
        if (f) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}