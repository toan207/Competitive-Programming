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
    int gen(string &s, int n, vector<int> &mem)
    {
        if (mem[n] != -1) return mem[n];
        if (s[n] == '0') return mem[n] = 0;
        int sm = gen (s, n + 1, mem);
        if (n < s.size() - 1 && ((s[n] == '1') || (s[n] == '2' && s[n + 1] < '7'))) sm += gen(s, n + 2, mem);
        return mem[n] = sm;
    }
    int numDecodings(string s) {
        vector<int> mem(s.size() + 1, -1);
        mem[s.size()] = 1;
        return gen(s,0,mem);;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}