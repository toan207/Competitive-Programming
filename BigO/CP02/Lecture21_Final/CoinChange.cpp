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
    int coins[] = {1,5,10,25,50};
    ll ways[7490] = {0};
    ways[0] = 1;
    for (int i = 0; i<5; ++i)
        for (int x = coins[i]; x<7490; ++x)
            ways[x] += ways[x - coins[i]];
    int n;
    while(cin>>n)
        cout<<ways[n]<<endl;
    return 0;
}