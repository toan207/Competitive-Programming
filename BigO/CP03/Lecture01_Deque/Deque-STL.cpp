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
    
    int T; cin>>T;

    while(T--)
    {
        int n, k; cin>>n>>k;
        vi res, a(n);
        deque<int> dq;
        FOR(i,0,n) cin>>a[i];
        FOR(i,0,n)
        {
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            while (!dq.empty() && a[dq.back()] <= a[i])
                dq.pop_back();
            
            dq.push_back(i);
            if (i >= k - 1)
                res.push_back(a[dq.front()]);
        }
        for (int i: res)
            cout<<i<<" ";
        cout<<endl;
    }
    
    return 0;
}