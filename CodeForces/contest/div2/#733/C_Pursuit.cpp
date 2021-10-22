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

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T; cin>>T;
    while (T--)
    {
        priority_queue<int> heap;
        int scoreM[101] = {0};
        int scoreI[101] = {0};
        int n; cin>>n;
        vi a,b;
        for (int i = 0; i<n; ++i)
        {
            int x; cin>>x;
            scoreM[x]++;
        }
        for (int i = 0; i<n; ++i)
        {
            int x; cin>>x;
            heap.push(x);
        }
        int getScore = n - n/4;
        int mySc = 0, ilSc = 0;
        int mark = getScore;
        for (int i = 100; i>=0; --i)
        {
            if (mark == 0)
                break;
            int temp = min(mark, scoreM[i]);
            mySc += temp*i;
            for (int j = 0; j<temp; ++j)
                a.push_back(i);
            mark -= temp;
        }
        for (int i = 0; i<getScore; ++i)
        {
            int temp = heap.top();
            heap.pop();
            ilSc += temp;
        }
        sort(a.begin(), a.end(), greater<int>());
        int ma = getScore, mb = getScore, more = 0;
        while (ilSc > mySc)
        {
            more++, ma++, n++;
            mySc += 100;
            if (!heap.empty())
            {
                ilSc += heap.top();
                heap.pop();
            }
            while (ma > n - n/4)
            {
                ma--;
                mySc -= a[a.size()-1];
                a.pop_back();
            }
        }
        cout<<more<<endl;
    }
    return 0;
}