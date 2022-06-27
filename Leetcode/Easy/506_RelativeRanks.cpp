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
    vector<string> findRelativeRanks(vector<int> &score)
    {
        priority_queue<pair<int, int>> pq;
        int n = score.size();
        for (int i = 0; i < n; ++i)
            pq.push({score[i], i});
        vector<string> prize(n);
        int cnt = 1;
        while (!pq.empty())
        {
            pair<int, int> u = pq.top();
            pq.pop();
            if (cnt > 3)
                prize[u.second] = to_string(cnt);
            else if (cnt == 1)
                prize[u.second] = "Gold Medal";
            else if (cnt == 2)
                prize[u.second] = "Silver Medal";
            else
                prize[u.second] = "Bronze Medal";
            cnt++;
        }
        return prize;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}