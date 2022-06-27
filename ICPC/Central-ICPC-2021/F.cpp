#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    int n = s.size(); s = ' ' + s;

    vector < vector <int> > nxt(n+3, vector <int> (26, n+1));
    for (int i = n; i >= 1; i--) {
        for (char c = 'a'; c <= 'z'; c++) {
            if (s[i] == c) nxt[i][c-'a'] = i;
            else nxt[i][c-'a'] = nxt[i+1][c-'a'];
        }
    }

    long long res = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 26; j++) {
            if (nxt[i][j] == n+1) continue;
            int s = nxt[nxt[i][j]+1][j];
            res += s - nxt[i][j];
        }
    }

    cout << res << '\n';
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);

    int nTest; cin >> nTest;
    while (nTest--) solve();

    return 0;
}
