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
    string convert(string s, int numRows) {
        int c = numRows - 1, res = 2*c;
        if (!c) return s;
        string ans = "";
        int t = 0, n = s.size();
        while (t < n)
        {
            ans += s[t];
            t += res;
        }
        for (int i = 1; i<c; ++i)
        {
            int mark = i, div = res;
            while (mark < n)
            {
                ans += s[mark];
                if (div - mark > 0 && div - mark < n)
                    ans += s[div - mark];
                mark += res;
                div += 2*res;
            }
        }
        t = c;
        while (t<n)
        {
            ans += s[t];
            t += res;
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