#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define nl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T; cin>>T;
    while (T--)
    {
        ll x; cin>>x;
        cout<<(x!=0) + (2*x)*(x>=0.5) + x*(x>1) + (x==(int)x) + (x%2==0) + (int)(x/2)<<endl;
    }
    return 0;
}