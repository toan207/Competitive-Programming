#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed << setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(), a.end()
#define FOR(i, a, n) for (int i = a; i < n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        long long total = 0;
        long long power26[8] = {0};
        power26[0] = 1;

        for (int i = 1; i < 8; ++i)
            power26[i] = power26[i - 1] * 26;

        for (int i = columnTitle.size() - 1; i >= 0; --i)
            total += (columnTitle[i] - 'A' + 1) * power26[columnTitle.size() - i - 1];
        return total;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}