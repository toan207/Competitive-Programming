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

int LIS(vl& A, vi& dp)
{
    int n = A.size();
    vl lis;
    dp.assign(n, 1);

    for (int j,i = 0; i<n; ++i)
    {
        j = upper_bound(lis.begin(), lis.end(), A[i] - 1) - lis.begin();
        dp[i] = j + 1;
        if (j == lis.size())
            lis.push_back(A[i]);
        else
            lis[j] = A[i];
    }
    return lis.size();
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n; cin>>n;
    vl A(n);
    vi dp;
    FOR(i,0,n) cin>>A[i];
    cout<<LIS(A,dp)<<endl;
    return 0;
}