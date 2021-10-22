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
    int maxLength(vector<string>& arr) {
        int ans = 0, n = arr.size();
        for (int i = 1; i <= (1 << n) - 1; ++i) {
            string s = "", tmp = "";
            for (int x = 0; x < n; ++x)
                if (i & (1 << x)) s += '1';
                else s += '0';
            reverse(s.begin(), s.end());
            for (int i = 0; i<n; ++i)
                if (s[i] == '1') tmp += arr[i];
            int mp[26] = {0};
            int f = 1;
            for (int x: tmp)
                if (!mp[x - 'a']) mp[x - 'a']++;
                else {f = 0; break;}
            if (f) ans = max(ans, (int)tmp.size());
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