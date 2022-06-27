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
    int strStr(string haystack, string needle) {
        if (!needle.size()) return 0;
        if (haystack.size() < needle.size()) return -1;
        for (int i = 0; i <= haystack.size() - needle.size(); ++i)
            if (haystack[i] == needle[0]) {
                int f = 1;
                for (int j = i; j < i + needle.size(); ++j)
                    if (haystack[i + (j - i)] != needle[j - i]) {
                        f = 0;
                        break;
                    }
                if (f) return i;
            }
        return -1;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}