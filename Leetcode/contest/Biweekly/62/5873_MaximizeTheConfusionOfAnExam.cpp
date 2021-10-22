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
    int maxConsecutiveAnswers(string a, int k) {
        int maxlen = 0, pos = 0, fc = 0;

        for (int end = 0; end < a.size(); end++) {
            if (a[end] == 'F')
                fc++;
            while (fc > k) {
                if (a[pos] == 'F')
                    fc--;
                pos++;
            }
            maxlen = max(maxlen, end - pos + 1);
        }

        pos = 0;
        int tc = 0;
        for (int end = 0; end < a.size(); end++) {
            if (a[end] == 'T')
                tc++;
            while (tc > k) {
                if (a[pos] == 'T')
                    tc--;
                pos++;
            }
            maxlen = max(maxlen, end - pos + 1);
        }
        return maxlen;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}