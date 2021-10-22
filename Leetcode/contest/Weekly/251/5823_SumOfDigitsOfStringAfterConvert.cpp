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
    int getLucky(string s, int k) {
        map<char, string> a;
        for (int i = 0; i<26; ++i)
            a[i + 'a'] = to_string(i + 1);
        string temp = "";
        for (char x: s)
            temp += a[x];
        int ans = 0;
        for (char x: temp)
            ans += x - '0';
        for (int i = 1; i < k; ++i)
        {
            int t = 0;
            int m = ans;
            while(m)
            {
                t += m%10;
                m /= 10;
            }
            ans = t;
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout<<Solution().getLucky("iiii",1);
    return 0;
}