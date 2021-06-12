#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<long long> a;
    a.assign(21,1);
    for (int i = 2; i<n+1; i++)
    {
        int x = 2, n = i;
        while (x*x <= n)
        {
            while (n%x == 0)
            {
                n /= x;
                a[x]++;
            }
            x++;
        }
        a[n]++;
    }
    int ans = 1;
    for (int i = 2; i<n+1; i++)
        ans *= a[i];
    cout<<ans-1<<endl;
    return 0;
}