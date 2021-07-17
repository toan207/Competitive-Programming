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
    int t; cin>>t;
    while (t--)
    {
        long long n,a,b; cin>>n>>a>>b;
        long long mark = 1;
        bool f = 0;
        while (mark <= n)
        {
            if ((n-mark)%b == 0)
            {
                f = 1;
                break;
            }
            mark *= a;
            if (a==1) break;
        }

        if (f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}