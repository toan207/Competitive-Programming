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
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if (digits[n - 1] < 9) {
            digits[n - 1]++;
            return digits;
        }
        int rem = 1;
        reverse(digits.begin(), digits.end());
        digits[0] = 0;
        for (int i = 1; i < n; ++i)
            if (rem + digits[i] <= 9) {
                rem = 0;
                digits[i]++;
                break;
            }
            else digits[i] = 0;
        if (rem) digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}