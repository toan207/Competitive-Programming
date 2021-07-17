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
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i<nums.size(); ++i)
            for (int j = 0; j<nums.size(); ++j)
                if (i == j)
                    continue;
                else if (nums[i] + nums[j] == target)
                    return {i,j};
        return {};
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}