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

ll f[5000][5000] = {0};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N;
    cin >> N;
    vl a(N);
    vl sm(N + 1);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
        sm[i + 1] += a[i] + sm[i];
    }

    for (int i = 0; i < N; ++i)
        f[i][i] = a[i];

    for (int i = N - 1; i >= 0; --i)
        for (int j = i + 1; j < N; ++j)
            f[i][j] = max(sm[j + 1] - sm[i] - f[i + 1][j], sm[j + 1] - sm[i] - f[i][j - 1]);

    ll X = f[0][N - 1], Y = sm[N] - X;
    cout << X - Y << endl;
    return 0;
}