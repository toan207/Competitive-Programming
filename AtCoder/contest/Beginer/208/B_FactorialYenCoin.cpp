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
    ll coin[10] = {0};
    coin[0] = 1;
    for (int i = 1; i<10; ++i)
        coin[i] = coin[i-1] * (i+1);
    int p; cin>>p;
    int count = 0;
    int i = 9;
    while(p)
    {
        while(p >= coin[i])
        {
            p -= coin[i];
            count++;
        }
        i--;
    }
    cout<<count<<endl;
    return 0;
}