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
    int n;
    while(cin>>n)
    {
        if (n == 0)
            break;
        int bet = 0, mx = 0;
        FOR(i,0,n)
        {
            int x; cin>>x;
            bet += x;
            if (bet > mx)
                mx = bet;
            if (bet < 0)
                bet = 0;
        }
        if (mx > 0)
            cout<<"The maximum winning streak is "<<mx<<"."<<endl;
        else
            cout<<"Losing streak."<<endl;
    }
    return 0;
}