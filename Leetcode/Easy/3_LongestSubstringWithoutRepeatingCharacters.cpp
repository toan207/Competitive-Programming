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
    int lengthOfLongestSubstring(string s) {
        map<char, int> dict;
        int i = 0, j = 0;
        int count = 0, ans = 0;
        while (j < s.size())
        {
            if (dict[s[j]])
            {
                while(s[i] != s[j])
                {
                    dict[s[i]] = 0;
                    i++, count--;
                }
                dict[s[i]] = 0;
                i++, count--;
            }
            count++;
            ans = max(count,ans);
            dict[s[j]] = 1;
            j++;
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