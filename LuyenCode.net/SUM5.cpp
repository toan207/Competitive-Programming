//https://luyencode.net/problem/SUM5
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    vector<double> a(int(1e6 + 1));
    a[0] = 0.0;
    for (int i = 1; i<1e6+1; ++i)
        a[i] += a[i-1] + (double)1/(double)i;
    while (T--)
    {
        int n; cin>>n;
        cout << fixed << setprecision(5) << a[n]<<endl;
    }
    return 0;
}