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
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;
        while (l < r)
        {
            mid = (l + r)/2;
            if (nums[mid] > nums[r]) l = mid + 1;
            else r = mid;
        }
        int pivot = l;
        l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            mid = ((l + r)/2 + pivot)%nums.size();
            if (nums[mid] == target) return mid;
            if (nums[mid] > target) r = (l + r)/2 - 1;
            else l = (l + r)/2 + 1;
        }
        return -1;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}