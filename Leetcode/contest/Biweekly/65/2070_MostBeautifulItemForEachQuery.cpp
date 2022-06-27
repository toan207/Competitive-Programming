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
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        vector<int> ans(queries.size());
        
        vector<pair<int ,int>> queriesPair;
        for (int i = 0; i < queries.size(); i++) {
            queriesPair.push_back({queries[i], i});
        }
        
        sort(queriesPair.begin(), queriesPair.end());
        sort(items.begin(), items.end());
        
        int itemIndex = 0, maxBeauty = 0;
        for (int i = 0; i < queriesPair.size(); i++) {
            int maxPriceAllowed = queriesPair[i].first;
            int queryOriginalIndex = queriesPair[i].second;
            
            while (itemIndex < items.size() && items[itemIndex][0] <= maxPriceAllowed) {
                maxBeauty = max(maxBeauty, items[itemIndex][1]);
                itemIndex++;
            }
            
            ans[queryOriginalIndex] = maxBeauty;
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