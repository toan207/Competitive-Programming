#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long n,x; cin>>n>>x;
        vector<long long> a(n);
        for (int i = 0; i<n; ++i) cin>>a[i];
        long long mi = 0, ma = 0, mark = 0;
        for (int i = 0; i<n; ++i)
        {
            if (a[i] % x && (mark + a[i]) % x)
            {
                mark += a[i];
                ma += (a[i]/x) + 1;
            }
            else
            {
                if (a[i] % x)
                    ma += a[i]/x + 1;
                else
                    ma += a[i]/x;
                if ((a[i] + mark) % x == 0)
                {
                    mi += (mark + a[i])/x;
                    mark = 0;
                }
                else
                    mi += a[i]/x;
            }
        }
        if (mark)
            mi += mark/x + 1;
        cout<<mi<<" "<<max(mi,ma)<<endl;
    }
    return 0;
}