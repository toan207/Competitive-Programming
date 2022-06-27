#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed << setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(), a.end()
#define FOR(i, a, n) for (int i = a; i < n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s;
    cin >> s;
    int n;
    cin >> n;
    string ans = "";
    int mx = 10000000;
    char tmp = s[0], c2 = s[1];
    for (int i = 0; i < s.size(); ++i)
        tmp = min(tmp, s[i]);
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == tmp && i > 0 && mx > s[i] + s[i - 1])
        {
            c2 = s[i - 1];
            mx = s[i] + s[i - 1];
        }
        if (s[i] == tmp && i < s.size() - 1 && mx > s[i] + s[i + 1])
        {
            c2 = s[i + 1];
            mx = s[i] + s[i + 1];
        }
    }
    for (int i = 0; i < n; ++i)
        if (i % 2)
            ans += c2;
        else
            ans += tmp;
    cout << ans << endl;
    return 0;
}