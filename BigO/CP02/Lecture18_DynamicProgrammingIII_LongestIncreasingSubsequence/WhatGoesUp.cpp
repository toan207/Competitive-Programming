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

int LIS(vl& A, vl&dp, vi& prev)
{
    int n = A.size();
    dp.assign(n, 1);
    prev.assign(n, -1);
    vl lis, lisPos;

    for (int j,i = 0; i<n; ++i)
    {
        j = upper_bound(lis.begin(), lis.end(), A[i] - 1) - lis.begin();
        if (j == lis.size())
        {
            lis.push_back(A[i]);
            lisPos.push_back(i);
            if (j != 0)
                prev[i] = lisPos[j - 1];
        }
        else
        {
            lis[j] = A[i];
            prev[i] = (j > 0) ? lisPos[j - 1] : -1;
            lisPos[j] = i;
        }
    }
    return lisPos[lisPos.size() - 1];
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    ll a;
    vl A,dp;
    vi prev;
    while(cin>>a) 
        A.push_back(a);
    vl ans;
    int mark = LIS(A,dp, prev);
    ans.push_back(A[mark]);
    mark = prev[mark];
    while (mark != -1)
    {
        ans.push_back(A[mark]);
        mark = prev[mark];
    }
    cout<<ans.size()<<endl;
    cout<<"-"<<endl;
    for (int i = ans.size() - 1; i>=0; --i)
        cout<<ans[i]<<endl;
    return 0;
}