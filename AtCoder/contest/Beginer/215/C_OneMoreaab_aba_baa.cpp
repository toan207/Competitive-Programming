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
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s; cin>>s;
    int fac = 1; FOR(i,1,s.size()+1) fac *= i;
    int K; cin>>K; K--; K%=fac;
    sort(s.begin(), s.end());
    while(K--) next_permutation(all(s));
    cout<<s<<endl;
    return 0;
}