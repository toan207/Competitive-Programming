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
#define MAX 30001

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    ll c[MAX] = {0};
    int coin[5] = {1,5,10,25,50};
    c[0] = 1;
    int n;

    for (int i = 0; i<=4; ++i)
        for (int j = coin[i]; j<MAX; ++j)
            c[j] += c[j - coin[i]];

    while (cin>>n)
    {
        if (c[n] == 1)
            cout<<"There is only 1 way to produce "<<n<<" cents change."<<endl;
        else
            cout<<"There are "<<c[n]<<" ways to produce "<<n<<" cents change."<<endl;
    }

    return 0;
}