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
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;

        cin >> n >> s;
        int imperfectness = false;
        int pos = -1;
        for (int i = 0; i < n; i++) {
            pos = -1;
            if (s[i] != '?')
                continue;
            for (int j = i + 1; j < n; j++)
                if (s[j] != '?') {
                    pos = j;
                    break;
                }
            if (pos == -1) {
                if (i > 0)
                    s[i] = s[i - 1] != 'B' ? 'B' : 'R';
                else
                    s[i] = 'B';
                continue;
            }
            if (i == 0) {
                if ((pos - i)%2 == 0)
                    s[i] = s[pos];
                else
                    s[i] = s[pos] != 'B' ? 'B' : 'R';
                continue;
            }
            else {
                if (s[i - 1] != s[pos])
                        s[i] = s[pos];
                else
                    s[i] = s[pos] != 'B' ? 'B' : 'R';
                continue;       
            }
        }
        cout << s << endl;
    }
    return 0;
}