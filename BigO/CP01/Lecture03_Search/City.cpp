#include <bits/stdc++.h>

using namespace std;
const int MAX_N = 501;
const int MAX_K = 2005;
int n, m, k;
int a[MAX_N][MAX_N];
int dx[] = {1, -1, 0, 0, 1, -1, 1, -1};
int dy[] = {0, 0, 1, -1, 1, -1, -1, 1};

int main () {
	//freopen("CITY.inp", "r", stdin);
	//freopen("CITY.out", "w", stdout);
	cin >> n >> m >> k;
	assert(n <= 500 && n >= 1);
	assert(m <= 500 && m >= 1);
	assert(k <= 2000 && k >= 1);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			assert(a[i][j] >= 1 && a[i][j] <= 1000000);
		}
	}
    vector <int> arrSum;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			int sum = 0;
			for (int t = 0; t < 8; t++) {
				int x = i + dx[t];
				int y = j + dy[t];
				if (x >= 1 && x <= n && y >= 1 && y <= m) {
					sum += a[x][y];
				}
			}

			arrSum.push_back(sum);
		}
	}

    sort(arrSum.begin(), arrSum.end());

	for (int i = 1; i <= k; i++) {
		int c;
		cin >> c;
		int id = lower_bound(arrSum.begin(), arrSum.end(), c) - arrSum.begin();
		if(arrSum[id] == c)
            cout << 1 << ' ';
        else cout << 0 << ' ';
	}
	return 0;
}
