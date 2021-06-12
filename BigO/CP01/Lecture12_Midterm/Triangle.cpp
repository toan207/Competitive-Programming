#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<unsigned long long> a(n);
    for (int i = 0; i<n; ++i) cin>>a[i];
    sort(a.begin(), a.end());
    long long X=0,Y=0,Z=0;
    
    for (int i = 0; i<n; ++i)
    {
        for (int j = i + 1; j<n; ++j)
        {
            int k = j;
            while(k + 1 < n && a[i] + a[j] > a[k + 1])
            {
                k++;
                if ((a[i] == a[j] && a[i] != a[k]) || (a[j] == a[k] && a[k] != a[i]))
                    Y++;
                if (a[i] * a[i] + a[j] * a[j] == a[k] * a[k])
                    Z++;
            }
            X += k - j;
        }
    }
    cout<<X<<" "<<Y<<" "<<Z;
}