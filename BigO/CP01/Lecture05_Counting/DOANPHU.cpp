#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int a[1001]={0};
    while (n--)
    {
        int s,e; cin>>s>>e;
        if (s > e)
            swap(s,e);
        for (int i = s; i < e; ++i)
            a[i]++;
    }
    int m = -1, count = 0;
    for (int i = 0; i <= 1000; ++i)
        m = max(m,a[i]);
    for (int i = 0; i <= 1000; ++i)
        if (a[i]==m)
            count++;
    cout<<count;
    return 0;
}