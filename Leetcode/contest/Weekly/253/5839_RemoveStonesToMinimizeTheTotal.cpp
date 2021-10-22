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
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> heap;
        long long ans = 0;
        for (int i: piles)
            heap.push(i);
        while(k--)
        {
            int temp = heap.top();
            heap.pop();
            temp = temp - temp/2;
            heap.push(temp);
        }
        while(!heap.empty())
        {
            ans += heap.top();
            heap.pop();
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}