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
    string process(string s, int n) {
        if (n == 1) return s;
        string tmp = "";
        for (int i = 0; i < s.size(); ++i) {
            int cnt = 1;
            while (i < s.size() - 1 && s[i] == s[i + 1]) {
                cnt++, i++;
            }
            tmp += (char)('0' + cnt);
            tmp += s[i];
        }
        return process(tmp, n - 1);
    }
    string countAndSay(int n) {
        return process("1", n);
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << Solution().countAndSay(4) << endl;
    return 0;
}