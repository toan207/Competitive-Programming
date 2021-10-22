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

double calc(double cx, double cy, double px, double py)
{
    return sqrt(abs(cx - px) * abs(cx - px) + abs(cy - py) * abs(cy - py));
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T, i = 1; cin>>T;
    while(T--)
    {
        cout<<"Case "<<i++<<": ";
        double cx,cy,r,px,py; cin>>cx>>cy>>r>>px>>py;
        double dist = calc(cx,cy,px,py);
        if (dist > r) cout<<"Outside"<<endl;
        else if (dist < r) cout<<"Inside"<<endl;
        else cout<<"OnCircle"<<endl;
    }
    return 0;
}