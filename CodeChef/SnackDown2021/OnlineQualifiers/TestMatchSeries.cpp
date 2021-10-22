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
    int T; cin >> T;
    while (T--) {
        int a[5];
        int cnt1 = 0, cnt2 = 0;
        FOR(i,0,5) {
            cin >> a[i];
            if (a[i] == 1) cnt1++;
            if (a[i] == 2) cnt2++;
        }
        if (cnt1 > cnt2) cout << "INDIA" << endl;
        else if (cnt1 < cnt2) cout << "ENGLAND" << endl;
        else cout << "DRAW" << endl;
    }
    return 0;
}