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
    vector<string> s(4);
    for (int i = 0; i<4; ++i) cin>>s[i];
    SORT(s);
    if (s[0] == "2B" && s[1] == "3B" && s[2] == "H" && s[3] == "HR")
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}