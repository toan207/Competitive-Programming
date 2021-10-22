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
    int myAtoi(string s) {
        long long sm = 0;
        int f = 0, pos = 0;
        for (char x: s)
        {
            if (x != ' ')
                break;
            pos++;
        }
        if(s[pos] == '+') f = 0, pos++;
        else if(s[pos] == '-') f = 1, pos++;
        if (s[pos] > '9' || s[pos] < '0') return sm;
        for (int i = pos; i<s.size(); ++i)
            if (s[i] <= '9' && s[i] >= '0')
            {
                sm = sm*10 + (s[i]-'0');
                if (sm > INT_MAX)
                    break;
            }
            else
                break;
        if (f) sm *= -1;
        if (sm < INT_MIN) return INT_MIN;
        if (sm > INT_MAX) return INT_MAX;
        return sm;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}