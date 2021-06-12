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
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T; cin>>T;
    cin.ignore();
    while (T--)
    {
        int w, total = 0;
        string s; getline(cin,s);
        stringstream ss(s);
        vi weights;
        while(ss>>w)
        {
            weights.push_back(w);
            total += w;
        }
        if (total%2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int dp[201] = {0};
        int len = total/2;
        for (int x = 0; x<weights.size(); ++x)
            for (int i = len; i>=weights[x]; --i)
                dp[i] = max(weights[x] + dp[i  - weights[x]], dp[i]);
        if (dp[len] == len)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}