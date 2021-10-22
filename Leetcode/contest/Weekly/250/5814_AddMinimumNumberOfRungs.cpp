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

class Solution {
public:
    int addRungs(vector<int>& rungs, int dist) {
        int mark = 0, more = 0;
        for (int i = 0; i<rungs.size(); ++i)
        {
            if (i == 0 && rungs[i] > dist)
                more += (rungs[i] - 1)/dist;
            else if (i != 0 && rungs[i] - dist > rungs[i-1])
                more += (rungs[i] - rungs[i-1] - 1)/dist;
        }
        return more;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vi a = {1,3,5,10};
    cout<<Solution().addRungs(a,2);
    return 0;
}