#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    long long ans = 0, prefixSumXor = 0;
    vector<long long> Even(1<<21), Odd(1<<21);
    Even[0] = 1;
    for (int i = 0; i<n; ++i)
    {
        long long a; cin>>a;
        prefixSumXor ^= a;
        if (i&1)
        {
            ans += Even[prefixSumXor];
            Even[prefixSumXor]++;
        }
        else
        {
            ans += Odd[prefixSumXor];
            Odd[prefixSumXor]++;
        }
    }
    cout<<ans<<endl;
    return 0;
}