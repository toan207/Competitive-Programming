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
    string longestPalindrome(string s) {
        int n = s.size();
        string t(2*n+1,'#');
        for (int i = 0; i<n; ++i)
            t[i*2 + 1] = s[i];
        n = t.size();
        vector<int> p(n);
        int l = 0, r = -1;
        for (int i = 0; i<n; ++i)
        {
            int k = (i > r) ? 0 : min(p[l+r-i], r-i);
            while (0 <= i-k && i+k < n && t[i-k] == t[i+k])
                k++;
            p[i] = --k;
            if (i+k < r)
            {
                l = i-k;
                r = i+k;
            }
        }
        int pos = 0, mx = 0;
        for (int i = 1; i<n; ++i)
            if (mx < p[i])
            {
                mx = p[i];
                pos = i;
            }
        return s.substr((pos-p[pos])/2,p[pos]);
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}