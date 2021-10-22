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
    vector<int> searchRange(vector<int>& nums, int target) {
        if (!nums.size()) return {-1,-1};
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            int mid = (l + r)/2;
            if (nums[mid] < target) l = mid + 1;
            else r = mid;
            
        }
        vector<int> pos(2,-1);
        if (nums[l] != target) return pos;
        pos[0] = l;
        r = nums.size() - 1;
        while (l < r)
        {
            int mid = (l + r)/2 + 1;
            if (nums[mid] <= target) l = mid;
            else r = mid - 1;
        }
        pos[1] = r;
        return pos;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}