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
    int N, K; cin>>N>>K;
    vi A(N);
    FOR(i,0,N) cin>>A[i];
    deque<int> dq;
    int n = A.size(), res = n+1;
    for(int i=0; i<n; i++){
        if(i>0) A[i] += A[i-1];
        if(A[i] >= K) res = min(res, i+1);
        while(dq.size()>0 && A[i] - A[dq.front()] >= K){
            res = min(res, i-dq.front());
            dq.pop_front();
        }
        while(dq.size()>0 && A[i] <= A[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout<<(res <= n ? res : -1)<<endl;
    return 0;
}