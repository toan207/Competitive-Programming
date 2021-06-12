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

int main()
{
    int T; cin>>T;
    while (T--)
    {
        int n; cin>>n;
        n >>= 1;
        for (int i = 1; i<=n; i<<=1)
            n |= i;
        cout<<n<<endl;
    }
    return 0;
}