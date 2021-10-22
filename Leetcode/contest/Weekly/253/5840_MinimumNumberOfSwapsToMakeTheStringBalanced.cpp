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
    int minSwaps(string s) {
        int open = 0, swp = 0;
        for (char i: s)
        {
            open += i == '[';
            if (i == ']')
            {
                if (open == 0)
                    swp++;
                else
                    open--;
            }
        }
        return swp - (swp)/2;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout<<Solution().minSwaps("[]")<<endl;
    return 0;
}