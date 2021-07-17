//https://codeforces.com/problemset/problem/7/D

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

const ll base = 123;
const int MAX = 5e6;
int f[MAX];

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s; cin>>s;
    ll hashS = 0, hashReverse = 0, POW = 1, ans = 0;
    for (int i = 0; i<s.size(); ++i)
    {
        hashS = hashS * base + (int)s[i];
        hashReverse = hashReverse + (int)s[i] * POW;
        POW *= base;
        if (hashS == hashReverse)
        {
            f[i] = f[(i-1)/2] + 1;
            ans += f[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}