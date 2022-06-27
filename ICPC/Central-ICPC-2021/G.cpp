//
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
typedef pair<int, pair<int, int> > pipii;
typedef pair<long, long> pll;
typedef long long ll;
#define nl endl;
const int INF = 1e9 + 7;


int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    string s;
    int k;

    cin >> s >> k;

    vector<int> v(s.size() + 1, 0);

    for (int n, x, y, i = 0; i < k; i++) {
        cin >> n >> x >> y;
        v[x - 1] += n;
        v[y] += -n;
    }

    int shifts = 0;
    for (int i = 0; i < s.size(); i++) {
        shifts += v[i];
        s[i] = 65 + (s[i] - 65 + shifts) % 26;
    }

    cout << s << endl;
    
    return 0;
}