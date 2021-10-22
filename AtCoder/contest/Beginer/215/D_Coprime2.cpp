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
    const int MAX = 100001;
    vi siv(MAX);
    vi primes;
    for (long long i = 2; i<MAX; ++i)
        if (!siv[i])
        {
            primes.push_back(i);
            for (long long j = i*i; j<MAX; j+=i) siv[j] = 1;
        }
    int N,M; cin>>N>>M;
    vi c(MAX), a(MAX,1);
    int ans = 0;
    FOR(i,0,N){
        int a; cin>>a;
        c[a] = 1;
    }
    for (int i: primes){
        int f = 1;
        for (int x = i; x<MAX; x += i)
            if (c[x]) {f = 0; break;}
        if (!f)
            for (int x = i; x<MAX; x += i) a[x] = 0;
    }
    FOR(i,1,M+1) ans += a[i];
    cout<<ans<<endl;
    for (int i = 1; i<=M; ++i) if (a[i]) cout<<i<<endl;
    return 0;
}