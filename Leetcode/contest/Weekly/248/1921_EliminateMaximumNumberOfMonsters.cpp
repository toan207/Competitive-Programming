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
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        priority_queue<int,vector<int>,greater<int>> heap;
        for (int i = 0; i<dist.size(); ++i)
            heap.push(ceil((float)dist[i]/(float)speed[i]));
        int time = 0, count = 0;
        while (!heap.empty())
        {
            int come = heap.top();
            heap.pop();
            if (come <= time)
                break;
            count++;
            time++;
        }
        return count;
    }
};