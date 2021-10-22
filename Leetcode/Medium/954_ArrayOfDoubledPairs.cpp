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

bool compare (int a, int b)
{
    return abs(a) < abs(b);
}

class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> mp;
        sort(arr.begin(), arr.end(), compare);
        for (int x: arr) mp[x]++;
        for (int x: arr)
        {
            if (!mp[x]) continue;
            if (!mp[x*2]) return false;
            mp[x*2]--, mp[x]--;
        }
        return true;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vi a = {3,1,3,6};
    cout<<Solution().canReorderDoubled(a);
    return 0;
}