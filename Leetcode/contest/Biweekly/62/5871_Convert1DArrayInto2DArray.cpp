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
    vector<vector<int>> construct2DArray(vector<int>& original, int n, int m) {
        if (n*m > original.size() || n*m < original.size()) return {};
        vector<vector<int> > ans;
        vector<int> tmp;
        for (int i: original) {
            tmp.push_back(i);
            if (tmp.size() == m) {
                ans.push_back(tmp);
                tmp.clear();
            }
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n; cin >> n;
    return 0;
}