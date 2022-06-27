#include <bits/stdc++.h>

using namespace std;
const int maxn = 100005;
int it[4 * maxn];
vector<pair<int, int>> save;

void update(int index, int L, int R, int l, int r)
{
  if (l > R || r < L)
    return;
  if (it[index] == 1)
    return;
  if (l <= L && R <= r)
  {
    it[index] = 1;
  }
  if (L != R)
  {
    int mid = (L + R) / 2;
    update(2 * index, L, mid, l, r);
    update(2 * index + 1, mid + 1, R, l, r);
    it[index] = it[2 * index] && it[2 * index + 1];
  }
}

int get(int index, int L, int R, int l, int r)
{
  if (l > R || r < L)
    return 1;
  if (l <= L && R <= r)
    return it[index];
  int mid = (L + R) / 2;
  int isCoverLeft = get(2 * index, L, mid, l, r);
  int isCoverRight = get(2 * index + 1, mid + 1, R, l, r);
  return (isCoverLeft && isCoverRight);
}

int main()
{
  freopen("test.inp", "r", stdin);
  freopen("test.out", "w", stdout);
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    save.clear();
    int L = maxn;
    int R = -1;
    for (int i = 1; i <= n; i++)
    {
      int l, r;
      cin >> l >> r;
      L = min(l, L);
      R = max(r, R);
      save.push_back(make_pair(l, r));
    }
    memset(it, 0, sizeof(it));
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
      if (get(1, L, R, save[i].first, save[i].second) == 0)
      {
        ans++;
        update(1, L, R, save[i].first, save[i].second);
      }
    }
    cout << ans << endl;
  }
  return 0;
}
