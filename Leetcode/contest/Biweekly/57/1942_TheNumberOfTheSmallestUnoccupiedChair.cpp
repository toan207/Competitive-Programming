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

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int n = times.size();
        int mark = times[targetFriend][0];
        priority_queue<int, vector<int>, greater<int>> pos;
        priority_queue<pair<int, int>, vector<pair<int,int> >, greater<pair<int,int> > > heap;
        sort(times.begin(), times.end());
        for (int i = 0; i<n; ++i) pos.push(i);
        for (int i = 0; i<n; ++i)
        {
            if (times[i][0] == mark)
                break;
            while (!heap.empty() && heap.top().first <= times[i][0])
            {
                pos.push(heap.top().second);
                heap.pop();
            }
            heap.push({times[i][1],pos.top()});
            pos.pop();
        }
        while (!heap.empty() && heap.top().first <= mark)
        {
            pos.push(heap.top().second);
            heap.pop();
        }
        return pos.top();
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    vvi a = {{33889,98676},{80071,89737},{44118,52565},{52992,84310},{78492,88209},{21695,67063},{84622,95452},{98048,98856},{98411,99433},{55333,56548},{65375,88566},{55011,62821},{48548,48656},{87396,94825},{55273,81868},{75629,91467}};
    cout<<Solution().smallestChair(a, 6)<<endl;
    return 0;
}