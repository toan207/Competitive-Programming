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
    int N, tmp = 0; cin>>N;
    vi s(N),t(N),Snuke(N);
    priority_queue< pii, vector<pii >, greater<pii > > heap;
    FOR(i,0,N) cin>>s[i];
    FOR(i,0,N)
    {
        cin>>t[i];
        heap.push(make_pair(t[i],i));
    }
    while (!heap.empty() && tmp < N)
    {
        pii u = heap.top();
        heap.pop();

        if (!Snuke[u.second])
        {
            Snuke[u.second] = u.first;
            tmp++;
        }
        heap.push(make_pair(u.first + s[u.second], (u.second + 1)%(N)));
    }
    FOR(i,0,N) cout<<Snuke[i]<<endl;
    return 0;
}