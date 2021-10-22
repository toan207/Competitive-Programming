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
    string makeFancyString(string s) {
        int mark = 1;
        string ans = "";
        for (int i = 0; i<s.size(); ++i)
        {
            if (i > 0 && s[i - 1] == s[i])
                mark++;
            else
                mark = 1;
            if (mark >= 2)
                continue;
            ans += s[i];
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    Solution().makeFancyString("aaabaaaa");
    return 0;
}