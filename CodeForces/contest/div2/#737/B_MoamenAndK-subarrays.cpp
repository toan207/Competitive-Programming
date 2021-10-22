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
    while (T--)
    {
        int n,k, wrong = 0; cin>>n>>k;
        vector<pii> a;
        for (int i = 0; i<n; ++i)
        {
            int x; cin>>x;
            a.push_back(make_pair(x,i));
        }
        sort(all(a));
        for (int i = 1; i<n; ++i)
            if (a[i].second < a[i-1].second || a[i].second > a[i-1].second + 1) wrong++;
        if (wrong >= k)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}