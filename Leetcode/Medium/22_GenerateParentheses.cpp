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
    void gen(string s, int l, int r, vector<string> &ans)
    {
        if (!l && !r)
        {
            ans.push_back(s);
            return;
        }
        if (l) gen(s + '(', l - 1, r + 1, ans);
        if (r) gen(s + ')', l, r - 1, ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        gen("",n,0,ans);
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}