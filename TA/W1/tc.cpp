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
    FOR(t,7,10)
    {
        string file = "input";
        file +=  ((char)t + '0');
        file += ".txt";
        cout<<file;
        ofstream ip(file);
        int N = rand() % 5000000 + 4000000;
        ip << N << " ";
        FOR(i,0,N)
        ip << rand() % MOD * ((rand() % 2) ? 1 : -1) <<endl;
    }
    return 0;
}