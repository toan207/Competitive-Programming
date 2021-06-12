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
    ll dp[30001] = {0};
    dp[0] = 1;
    int coins[11] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
    for (int i = 0; i<11; i++)
        for (int c = coins[i]; c<30001; c++)
            dp[c] += dp[c - coins[i]];
    double n;
    while(cin>>n)
    {
        if (n == 0.0)
            break;
        printf("%6.2f%17lld\n",n,dp[(int)(n*100 + 0.5)]);
    }
    return 0;
}