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
    string maximumNumber(string num, vector<int>& change) {
        int mark = -1;
        for (int i = 0; i<num.size(); ++i)
            if (num[i] - '0' < change[num[i] - '0'])
            {
                mark = i;
                break;
            }
        for (int i = mark; i<num.size(); ++i)
            if (num[i] - '0' <= change[num[i] - '0'])
                num[i] = change[num[i] - '0'] + '0';
            else
                break;
        return num;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vi a = {0,9,2,3,3,2,5,5,5,5};
    cout<<Solution().maximumNumber("334111",a);
    return 0;
}