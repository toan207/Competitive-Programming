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

int n, q;
vl a;
deque<ll> dq;
int checkKelement(int k)
{
    ll mi = 1e7;
    FOR(i,0,n)
    {
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();
        while (!dq.empty() && a[dq.back()] <= a[i])
            dq.pop_back();
        
        dq.push_back(i);
        if (i >= k-1)
            mi = min(a[dq.front()], mi);
    }
    return mi;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    cin>>n>>q;
    a.assign(n,0);
    FOR(i,0,n) cin>>a[i];
    while(q--)
    {
        int Q; cin >> Q;
        cout<<checkKelement(Q)<<endl;
        dq.clear();
    }

    return 0;
}