#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> a(n), arrived(n+1);
    stack<int> ar;
    for (int i = 0; i<n; ++i) cin>>a[i];
    int pre = 1;
    for (int i = 0; i<n; ++i)
    {
        while (pre < a[i])
        {
            ar.push(pre);
            pre++;
        }
        arrived[a[i]] = 1;
        if (pre <= a[i])
        {
            cout<<a[i]<<" ";
            pre++;
        }
        while (!ar.empty() && arrived[ar.top()])
        {
            cout<<ar.top()<<" ";
            ar.pop();
        }
    }
    cout<<endl;
    return 0;
}