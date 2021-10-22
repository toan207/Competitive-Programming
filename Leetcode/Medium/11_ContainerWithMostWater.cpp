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
    int maxArea(vector<int>& height) {
        int mx = 0, l = 0, r = height.size() - 1;
        while (l < r)
        {
            if (height[l] < height[r])
            {
                mx = max(mx, height[l] * (r-l));
                l++;
            }
            else
            {
                mx = max(mx, height[r] * (r-l));
                r--;
            }
        }
        return mx;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}