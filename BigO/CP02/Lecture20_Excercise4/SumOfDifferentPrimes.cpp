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
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

#define MAX 1121

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    vi primes;
    vi check(MAX, 1);
    check[0] = check[1] = 0;
    for (int i = 2; i<=MAX; ++i)
        if (check[i])
        {
            primes.push_back(i);
            for (int j = i*i; j<MAX; j+=i)
                check[j] = 0;
        }

    ll dp[MAX][15] = {0};
    dp[0][0] = 1;
    for(int i = 0; i < primes.size(); i++) {
        for(int j = MAX - 1; j >= primes[i]; j--) {
            for(int k = 14; k >= 1; k--)
                dp[j][k] += dp[j-primes[i]][k-1];
        }
    }

    while(true)
    {
        int n,k; cin>>n>>k;
        if (n == 0 && k == 0)
            break;
        cout<<dp[n][k]<<endl;
    }

    return 0;
}