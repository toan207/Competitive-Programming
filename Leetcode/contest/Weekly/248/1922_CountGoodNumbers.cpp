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

class Solution {
public:
    const long long MOD = 1000000007;

    long long mul(long long a, long long x, long long p)
    {
        if (x == 0) return 1;
        long long res = mul(a,x/2,p);
        res = res * res % p;
        if (x%2)
            res = res * a  % p;
        return res;
    }

    int countGoodNumbers(long long n) {
        long long pe = n/2 + n%2, po = (n/2);
        return mul(5,pe,MOD) * mul(4,po,MOD) % MOD;
    }
};