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
    int f = 0, N; cin>>N;
    for (int i = 0; i<N; ++i)
    {
        char x; cin>>x;
        if (x=='1')
        {
            if (i%2)
                cout<<"Aoki"<<endl;
            else
                cout<<"Takahashi"<<endl;
            break;
        }
    }
    return 0;
}