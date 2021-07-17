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
    priority_queue<pii,vector<pii>,greater<pii>> heap;
    ll n,k; cin>>n>>k;
    ll mark = k/n;
    k -= mark*n;
    vi cz, more(n);
    for (int i = 0; i<n; ++i)
    {
        int id; cin>>id;
        heap.push({id,i});
    }
    while (!heap.empty() && k)
    {
        int tindex = heap.top().second;
        heap.pop();
        more[tindex]++;
        k--;
    }
    for (int i = 0; i<n; ++i)
        cout<<mark + more[i]<<endl;
    return 0;
}