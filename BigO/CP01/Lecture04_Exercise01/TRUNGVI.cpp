#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; cin>>N;
    vector<int> a(N),b;
    for (int i=0;i<N;++i)
    {
        for (int j=0;j<N;++j)
            cin>>a[j];
        sort(a.begin(), a.end());
        b.push_back(a[(int)(N/2)]);
    }
    sort(b.begin(),b.end());
    cout<<b[(int)(N/2)];
    return 0;
}