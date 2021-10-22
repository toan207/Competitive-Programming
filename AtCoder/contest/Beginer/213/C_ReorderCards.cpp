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
    int N; cin>>N>>N>>N;
    vector<pii> a;
    vi r(N), c(N);
    map<int,int> mpR, mpC;
    for(int i = 0; i<N; ++i)
    {
        cin>>r[i]>>c[i];
        a.push_back(make_pair(r[i],c[i]));
    }
    sort(r.begin(), r.end());
    sort(c.begin(), c.end());
    int x = 1, y = 1;
    for (int i = 0; i<N; ++i)
    {
        if (!mpR[r[i]])
            mpR[r[i]] = x++;
        if (!mpC[c[i]])
            mpC[c[i]] = y++;
    }
    for (int i = 0; i<N; ++i)
        cout<<mpR[a[i].first]<<" "<<mpC[a[i].second]<<endl;
    return 0;
}