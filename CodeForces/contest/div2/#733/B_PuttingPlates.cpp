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
    int T; cin>>T;
    while (T--)
    {
        int x,y; cin>>x>>y;
        vvi table;
        table.assign(x,vector<int>());
        for (int j = 0; j<y; ++j)
            if (j%2 == 0)
                table[0].push_back(1);
            else
                table[0].push_back(0);
        for (int i = 1; i<x-1; i+=2)
        {
            for (int j = 0; j<y; ++j)
                table[i].push_back(0);
            for (int j = 0; j<y && i+1<x-2; ++j)
                if (j == 0 || j == y-1)
                    table[i+1].push_back(1);
                else
                    table[i+1].push_back(0);
        }
        if (x%2 == 0)
            for (int j = 0; j<y; ++j)
                table[x-2].push_back(0);
        for (int j = 0; j<y; ++j)
            if (j%2 == 0)
                table[x-1].push_back(1);
            else
                table[x-1].push_back(0);
        for (int i = 0; i<x; ++i)
        {
            for (int j = 0; j<y; ++j)
                cout<<table[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}