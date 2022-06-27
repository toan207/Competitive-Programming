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
    bool checkAlmostEquivalent(string word1, string word2) {
        int cntA[26] = {0}, cntB[26] = {0};
        for (int i: word1) cntA[i - 'a']++;
        for (int i: word2) cntB[i - 'a']++;
        for (int i = 0; i<26; ++i)
            if (abs(cntA[i] - cntB[i]) > 3)
                return false;
        return true;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << Solution().checkAlmostEquivalent("aaaa","bccb");
    return 0;
}