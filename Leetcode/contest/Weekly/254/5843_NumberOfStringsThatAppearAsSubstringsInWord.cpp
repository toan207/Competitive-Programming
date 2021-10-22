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
    int numOfStrings(vector<string>& patterns, string word) {
        int a[26] = {0};
        int ans = 0;
        for (char x: word) a[x-'a']++;
        for (int i = 0; i<patterns.size(); ++i)
        {
            if (patterns[i].size() > word.size()) continue;
            for (int j = 0; j < word.size() - patterns[i].length() + 1; ++j)
                if (patterns[i] == word.substr(j, patterns[i].length()))
                {
                    ans++; 
                    break;
                }
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