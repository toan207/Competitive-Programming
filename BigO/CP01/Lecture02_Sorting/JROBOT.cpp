#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,M; cin>>N>>M;
    vector<int> h;
    for (int i=0;i<N;++i)
        for (int j=0;j<M;++j)
        {
            int temp; cin>>temp;
            h.push_back(temp);
        }
    int s,e; cin>>s>>e;
    int mark = h[M*(s-1) + (e-1)], count = 0;
    sort(h.begin(), h.end());
    for (int i = 0; i<N*M; ++i)
        if (h[i] > mark)
        {
            mark = h[i];
            count++;
        }
    cout<<count;
    return 0;
}