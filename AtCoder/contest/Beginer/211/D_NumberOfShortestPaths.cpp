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
    int N, M;
    cin >> N >> M;
    vector<vector<int>> E(N);
    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        E[A].push_back(B);
        E[B].push_back(A);
    }
    vector<int> d(N, -1);
    d[0] = 0;
    vector<long long> dp(N, 0);
    dp[0] = 1;
    queue<int> Q;
    Q.push(0);
    while (!Q.empty())
    {
        int v = Q.front();
        Q.pop();
        for (int w : E[v])
        {
            if (d[w] == -1)
            {
                d[w] = d[v] + 1;
                Q.push(w);
            }
            if (d[w] == d[v] + 1)
            {
                dp[w] += dp[v];
                dp[w] %= MOD;
            }
        }
    }
    cout << dp[N - 1] << endl;
}