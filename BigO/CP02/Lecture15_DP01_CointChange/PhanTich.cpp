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
    vi div;
    int dp[201] = {0};
    int N,K; cin>>N>>K;
    for (int i = 2; i<K/2 + 1; ++i)
        if (K%i == 0)
            div.push_back(i);
    div.push_back(K);
    vi count(div.size());
    for (auto i: div)
        for (int x = 0; x<=N; x += i)
            dp[x] = 1;
    int i = div.size() - 1;
    while (N>0 && i>-1)
    {
        if (N - div[i] >= 0 && dp[N-div[i]])
        {
            count[i]++;
            N -= div[i];
        }
        else
            i--;
    }
    if (i == -1)
        cout<<0<<endl;
    else
        for (int i = 0; i<count.size(); i++)
            if (count[i])
                cout<<div[i]<<" "<<count[i]<<endl;
    return 0;
}   