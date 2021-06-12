#include <bits/stdc++.h>
using namespace std;

struct box
{
    int a;
    int b;
};

bool compare(box& a, box& b)
{
    return a.b > b.b;
}

int main()
{
    int N,M; cin>>N>>M;
    vector<box> cyc;
    while (M--)
    {
        int a,b; cin>>a>>b;
        cyc.push_back({a,b});
    }
    int count = 0;
    sort(cyc.begin(), cyc.end(),compare);
    for (int i=0; i<cyc.size(); ++i)
    {
        count += min(N, cyc[i].a)*cyc[i].b;
        N -= cyc[i].a;
        if (N<=0)
            break;
    }
    cout<<count;
    return 0;
}