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
        string s; cin >> s;
        map<char, vector<int> > mp;
        int mi = 30;
        for (int i = 0; i < s.size(); ++i) 
            if (s[i] == '0' || s[i] == '5' || s[i] == '2' || s[i] == '7') mp[s[i]].push_back(i);
        for (int i = 0; i < mp['0'].size(); ++i)
            for (int j = 0; j < mp['0'].size(); ++j) {
                if (j == i) continue;
                int tmp = abs(mp['0'][j] - mp['0'][i]) + s.size() - max(mp['0'][j], mp['0'][i]) - 2;
                mi = min(tmp, mi);
            }
        for (int i = 0; i < mp['5'].size(); ++i)
            for (int j = 0; j < mp['0'].size(); ++j) {
                if (mp['5'][i] > mp['0'][j]) continue;
                int tmp = abs(mp['0'][j] - mp['5'][i]) + s.size() - max(mp['0'][j], mp['5'][i]) - 2;
                mi = min(tmp, mi);
            }
        for (int i = 0; i < mp['2'].size(); ++i)
            for (int j = 0; j < mp['5'].size(); ++j) {
                if (mp['2'][i] > mp['5'][j]) continue;
                int tmp = abs(mp['5'][j] - mp['2'][i]) + s.size() - max(mp['5'][j], mp['2'][i]) - 2;
                mi = min(tmp, mi);
            }
        for (int i = 0; i < mp['7'].size(); ++i)
            for (int j = 0; j < mp['5'].size(); ++j) {
                if (mp['7'][i] > mp['5'][j]) continue;
                int tmp = abs(mp['5'][j] - mp['7'][i]) + s.size() - max(mp['5'][j], mp['7'][i]) - 2;
                mi = min(tmp, mi);
            }

        cout << mi << endl;
    }
    return 0;
}