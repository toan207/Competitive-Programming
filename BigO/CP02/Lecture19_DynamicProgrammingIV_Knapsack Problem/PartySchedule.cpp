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
    
    while (true)
    {
        int budget, parties; cin>>budget>>parties;
        if (budget == 0 && parties == 0)
            break;
        vi fun(budget + 1);
        while (parties--)
        {
            int b,f; cin>>b>>f;
            for (int i = budget; i>=b; --i)
            {
                int mark = i - b;
                if (fun[mark] + f > fun[i])
                    fun[i] = fun[mark] + f;
            }
        }
        int minMoney = budget;
        for (int i = budget; i>=0; --i)
        {
            if (fun[i] != fun[budget])
                break;
            minMoney = i;
        }
        cout<< minMoney << " " << fun[budget] <<endl;
    }

    return 0;
}