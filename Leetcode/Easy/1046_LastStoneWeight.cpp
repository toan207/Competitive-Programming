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
    int lastStoneWeight(vector<int> &stones)
    {
        priority_queue<int> pq(stones.begin(), stones.end());
        while (!pq.empty())
        {
            if (pq.size() == 1)
                return pq.top();
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if (x != y)
                pq.push(abs(x - y));
        }
        return 0;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}