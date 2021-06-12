#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<long long> num(n);
    for (int i=0;i<n;++i) cin>>num[i];
    sort(num.begin(), num.end());
    cout<<max(num[n-1]*num[n-2]*num[n-3], num[n-1]*num[0]*num[1]);
    return 0;
}