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
    int N,K; cin>>N>>K;
    vi cand(N);
    map<int,int> cnt;
    for (int i = 0; i<N; ++i)
        cin>>cand[i];
    int i = 0, j = 0, ans = 0, count = 0;
    while (j < N)
    {
        // cout<<count<<" "<<cand[i]<<" "<<cand[j]<<" "<<cnt[cand[j]]<<endl;
        if (j - i < K)
        {
            if (!cnt[cand[j]])
                count++;
            cnt[cand[j]] += 1;
            j++;
        }
        else
        {
            cnt[cand[i]] -= 1;
            if (!cnt[cand[i]])
                count--;
            i++;
            if (!cnt[cand[j]])
                count++;
            cnt[cand[j]] += 1;
            j++;
        }
        ans = max(count,ans);
    }
    cout<<min(ans,K)<<endl;
    return 0;
}