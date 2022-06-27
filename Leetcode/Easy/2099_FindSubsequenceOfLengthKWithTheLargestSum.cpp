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
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int> > pq;
        priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > > tmp;
        for (int i = 0; i < nums.size(); ++i) pq.push({nums[i],i});
        vector<int> ans;
        while (k--) {
            tmp.push({pq.top().second, pq.top().first}); pq.pop();
        }
        while (!tmp.empty()) {
            ans.push_back(tmp.top().second);
            tmp.pop();
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}