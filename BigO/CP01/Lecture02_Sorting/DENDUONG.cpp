#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,L; cin>>n>>L;
    vector<long double> a(n);
    for (int i=0;i<n;++i) cin>>a[i];
    sort(a.begin(),a.end());
    long double ma = a[0] - 0;
    for (int i=1;i<n;++i) ma = max(ma,(a[i] - a[i-1])/2);
    cout<<fixed<<setprecision(2)<<ma;
    return 0;
}