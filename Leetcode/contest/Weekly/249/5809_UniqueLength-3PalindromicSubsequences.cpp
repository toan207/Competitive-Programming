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
    int countPalindromicSubsequence(string s) {
        map<char, int> check[26];
        int ans = 0;
        for (char c = 'a'; c<='z'; ++c)
        {
            int count = 0, mark = 0, countChar = 0;
            int x = -1, y = -1;
            for (int i = 0; i<s.size(); ++i)
            {
                if (x != -1)
                {
                    if (!check[c-'a'][s[i]])
                    {
                        count++;
                        check[c-'a'][s[i]] = 1;
                    }
                }
                if (s[i] == c)
                {
                    if (x == -1)
                        x = i;
                    else
                        mark = count - 1;
                    countChar++;
                }
            }
            ans += mark + (countChar > 2);
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout<<Solution().countPalindromicSubsequence("bbcbaba")<<endl;
    return 0;
}