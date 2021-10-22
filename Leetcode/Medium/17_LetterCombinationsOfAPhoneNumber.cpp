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
    void gen(string s, int n, string ip, vector<string> &ans)
    {
        if (n == ip.size())
        {
            ans.push_back(s);
            return;
        }
        int f = ip[n] > '7';
        gen(s + (char)('a' + (ip[n] - '2')*3 +  0 + f),n+1,ip,ans);
        gen(s + (char)('a' + (ip[n] - '2')*3 +  1 + f),n+1,ip,ans);
        gen(s + (char)('a' + (ip[n] - '2')*3 +  2 + f),n+1,ip,ans);
        if (ip[n] == '7' || ip[n] == '9') gen(s + (char)('a' + (ip[n] - '2')*3 +  3 + f),n+1,ip,ans);
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.empty()) return ans;
        gen("",0,digits,ans);
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}