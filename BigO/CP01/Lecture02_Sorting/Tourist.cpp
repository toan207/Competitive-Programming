#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t; cin>>t;
    for (int _ = 1; _<=t; ++_)
    {
        char att[51][21];
        long long N,K,V; cin>>N>>K>>V;
        for (int i=0;i<N;++i) cin>>att[i];
        int mark = (V-1) % N;
        cout<<"Case #"<<_<<": ";    
        if (K > N - mark)
        {
            for (int i = 0; i<K-N+mark; ++i)
                cout<<att[i]<<" ";
            K = 0;
        }
        for (int i = mark; i<=N-K; ++i)
            cout<<att[i]<<" ";
        cout<<endl;
    }
    return 0;
}