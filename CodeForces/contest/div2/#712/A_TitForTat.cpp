#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        int n, k; cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i<n; ++i)
            cin>>a[i];
        int i = 0, temp = 0;
        while (k > 0 && i != n - 1)
        {
            if (k >= a[i])
            {
                temp += a[i];
                k -= a[i];
                a[i] = 0;
                i++;
            }
            else
            {
                temp += k;
                a[i] -= k;
                k = 0;
            }
        }
        a[n-1] += temp;
        for (int x = 0; x<n; x++) cout<<a[x]<<" ";
        cout<<endl;
    }
    return 0;
}