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
    void nextPermutation(vector<int>& p) {
        int n = p.size();
        int i = n - 2;
        while (i >= 0 && p[i] >= p[i + 1]) i--;
        if (i < 0)
        {
            reverse(p.begin(), p.end());
            return;
        }
        int k = n - 1;
        while (p[k] <= p[i]) k--;
        swap(p[k], p[i]);
        i++, k = n - 1;
        while (i < k)
        {
            swap(p[i],p[k]);
            i++, k--;
        }
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}