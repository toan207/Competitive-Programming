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

const int MAX = 1e5 + 5;

bool get(int index, int L, int R, int l, int r, vi &it)
{
    if (L > r || l > R)
        return true;
    if (l <= L && R <= r)
        return it[index];
    int mid = (L + R) / 2;
    bool isCoverLeft = get(2 * index, L, mid, l, r, it);
    bool isCoverRight = get(2 * index + 1, mid + 1, R, l, r, it);
    return (isCoverLeft && isCoverRight);
}

void update(int index, int L, int R, int l, int r, vi &it)
{
    if (it[index])
        return;
    if (l > R || L > r)
        return;
    if (l <= L && R <= r)
        it[index] = true;
    if (L != R)
    {
        int mid = (L + R) / 2;
        update(2 * index, L, mid, l, r, it);
        update(2 * index + 1, mid + 1, R, l, r, it);
        it[index] = (it[2 * index] && it[2 * index + 1]);
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        vvi arr;
        int ans = 0;
        vi it(MAX * 4);
        for (int i = 0; i < N; ++i)
        {
            int l, r;
            cin >> l >> r;
            arr.push_back({l, r});
        }
        for (int i = N - 1; i >= 0; --i)
        {
            if (!get(1, 1, M, arr[i][0], arr[i][1], it))
            {
                ans++;
                update(1, 1, M, arr[i][0], arr[i][1], it);
            }
        }
        cout << ans << endl;
    }
    return 0;
}