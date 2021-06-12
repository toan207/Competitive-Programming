#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<long long> a(n);
    for (int i = 0; i<n; ++i) cin>>a[i];
    sort(a.begin(),a.end());
    int f = 0, s = 0, ans = 0, mark = 0;
    while (f < n && s < n)
    {
        if (a[f] + 5 >= a[s])
        {
            mark++;
            s++;
        }
        else
        {
            ans = max(mark, ans);
            mark--;
            f++;
        }
    }
    cout<<max(mark, ans)<<endl;
    return 0;
}