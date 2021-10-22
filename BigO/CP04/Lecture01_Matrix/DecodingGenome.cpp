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

inline void add(int &a, int b) {
	a = (a + b) % MOD;
}

struct SMatrix {
	int m, n;
	vector <vector <int>> v;

	inline void resize(int _m, int _n) {
		m = _m, n = _n;
		v.resize(m, vector<int> (n, 0));
	}

	inline void setValue(vector <vector<int>> a) {
		v = a;
		m = v.size(); n = v[0].size();
	}

	inline SMatrix operator * (const SMatrix &that) {
		SMatrix res;
		res.resize(m, that.n);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < that.n; j++)
				for (int k = 0; k < n; k++)
					add(res.v[i][j], 1LL * v[i][k] * that.v[k][j] % MOD);
		return res;
	}

	inline SMatrix Power(long long b) {

		SMatrix res;
		res.resize(m, n);
		for (int i = 0; i < n; i++)
			res.v[i][i] = 1;

		SMatrix A;
		A.setValue(v);

		while (b > 0) {
			if (b & 1) res = res * A;
			A = A * A;
			b >>= 1;
		}

		return res;
	}
};

int f(char c) { 
	return 'a' <= c && c <= 'z'  ? c -'a' : c - 'A' + 26;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll n,m,k; cin >> n >> m >> k;
    SMatrix A;
    A.resize(m,m);

    for (int i = 0; i < m; ++i) 
        for (int j = 0; j < m; ++j) 
            A.v[i][j] = 1;

    for (int i = 0; i < k; ++i) {
        char x,y; cin >> x >> y;
        A.v[f(x)][f(y)] = 0;
    }

    A = A.Power(n - 1);

    int res = 0;
    for (auto &i: A.v) {
        for (auto &j: i) {
            res += j;
            res %= MOD;
        }
    }
    cout << res << endl;
    return 0;
}