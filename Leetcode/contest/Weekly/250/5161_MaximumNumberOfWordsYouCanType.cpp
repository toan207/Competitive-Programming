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
    int canBeTypedWords(string text, string brokenLetters) {
        istringstream ss(text);
        string s;
        int ans = 0;
        int brk[26] = {0};
        for (char i: brokenLetters)
            brk[i-'a']++;
        while (ss>>s)
        {
            int f = 1;
            for (char i: s)
                if (brk[i-'a'])
                {
                    f = 0;
                    break;
                }
            ans += f;
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout<<Solution().canBeTypedWords("hello world","ad");
    return 0;
}