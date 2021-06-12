#include <bits/stdc++.h>
using namespace std;

long long n,l,r,x,ans = 0;
vector<long long> bin,a;

void gen(int pos)
{
    if (pos == n)
    {
        long long sum = 0, mx = -1, mi = 1e10;
        for (int i = 0; i<n; ++i)
        {
            if(bin[i])
            {
                sum += a[i];
                mx = max(a[i],mx);
                mi = min(a[i],mi); 
            }
        }
        if (sum >= l && sum <= r && mx - mi >= x)
            ans++;
        return;
    }
    for (int i = 0; i<2; ++i)
    {
        bin.push_back(i);
        gen(pos + 1);
        bin.pop_back();
    }
}

int main()
{
    cin>>n>>l>>r>>x;
    a.assign(n,0);
    for (int i = 0; i<n; ++i)
        cin>>a[i];
    gen(0);
    cout<<ans<<endl;
    return 0;
}