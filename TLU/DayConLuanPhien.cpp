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
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define all(a) a.begin(),a.end()
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n; cin>>n;
    int ans = 0;
    vi B, mark;
    vi A(n);
    FOR(i,0,n) cin>>A[i];
    for (int i = 0; i<pow(2,n) - 1; ++i)
    {
        B.clear();
        mark.clear();
        int temp = 0;
        for (int j = 1; j<=i; j <<= 1)
            if (j&i)
                mark.push_back(1);
            else
                mark.push_back(0);
        while (mark.size() < n)
            mark.push_back(0);
        reverse(all(mark));
        for (int j = 0; j<mark.size(); ++j)
            if (mark[j])
                B.push_back(A[j]);
        for (int j = 1; j<B.size(); ++j)
        {
            if (j%2 && B[j] < B[j-1])
                temp++;
            else if (!(j%2) && B[j] > B[j-1])
                temp++;
            else
                break;
        }
        ans = max(ans, temp);
    }
    cout<<ans+1<<endl;
    return 0;
}