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
    vi check(5 * 1e5);
    while (T--) {
        int N, ans = 0; cin >> N;
        vi B(N), A(N), mark;
        FOR(i,0,N) cin >> B[i];
        FOR(i,0,N) {
            int u = B[i] - 1;
            while (check[u] && u != 0) {
                int tmp = u - check[u];
                check[u]++;
                u = max(0, tmp);
            }
            check[u]++;
            mark.push_back(u);
            A[i] = u;
        }
        for (int x: mark) check[x] = 0;
        for (int x: A) cout << x << " ";
        cout << endl;
    }
    return 0;
}