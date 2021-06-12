#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    long long f[100000];
    f[0] = 1;
    f[1] = 1;
    int ans = 0;
    for (int i = 2;; i++)
    {
        f[i] = f[i-1] + f[i-2];
        if (ans + f[i] - f[i-1] - 1 >= n)
        {    
            ans = f[i-1] + n - ans;
            break;
        }
        ans += f[i] - f[i-1] - 1;
    }
    cout<<ans<<endl;
    return 0;
}