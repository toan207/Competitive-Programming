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
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 1e9, mark = 0;
        for (int i = 0; i<n; ++i)
        {
            int x = i + 1, y = n - 1;
            while (x < y)
            {
                if (abs(target - (nums[x] + nums[i] + nums[y])) < ans)
                {
                    ans = min(ans, abs(target - (nums[x] + nums[i] + nums[y])));
                    mark = nums[x] + nums[i] + nums[y];
                    if (mark == target) return mark;
                }
                if (nums[x] + nums[y] + nums[i] < target) x++;
                else y--;
            }
        }
        return mark;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}