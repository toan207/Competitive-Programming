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
    string ans = "";
    void gen(int n, string s, vector<string>& nums)
    {
        for (int i = 0; i<2; ++i)
        {
            if (ans != "") return;
            if (s.size() == n)
            {
                int f = 1;
                for (string x: nums)
                    if (s == x) {f = 0; break;}
                if (f) ans = s;
                return;
            }
            gen(n, s+(char)('0' + i), nums);
        }
    }
    string findDifferentBinaryString(vector<string>& nums) {
        gen(nums.size(), "", nums);
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}