#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000009L

vvl matrixMul(const vvl &A, vvl &B)
{
    vvl C(A.size(), vl(B[0].size()));
    FOR (i,0,A.size()) FOR(j,0,B[0].size()) FOR(k,0,A[0].size())
    C[i][j] = (A[i][k] * B[k][j]%MOD + C[i][j])%MOD;
    return C;
}

vvl fastMul(vvl &A, long long k)
{
    if (k == 0) return {{1,0,0},{0,1,0},{0,0,1}};
    if (k == 1) return A;
    vvl tmp = fastMul(A, k/2);
    tmp = matrixMul(tmp, tmp);
    if (k&1) tmp = matrixMul(tmp,A);
    return tmp;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vvl A = {{0,1,0},{0,0,1},{1,1,1}};
    vvl fi = {{0}, {1}, {2}};
    ll N;
    while (cin>>N && N)
        cout<<matrixMul(fastMul(A,N-1),fi)[0][0]%MOD<<endl;
    return 0;
}