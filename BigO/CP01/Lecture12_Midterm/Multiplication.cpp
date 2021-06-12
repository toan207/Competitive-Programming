#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        long long N,M; cin>>N>>M;
        if (M>=6)
            cout<<9<<endl;
        else
        {
            int ans = 1;
            for (long long i = N; i<N+M; ++i)
                ans = (ans % 9 * i % 9) % 9;
            if (!ans)
                cout<<9<<endl;
            else
                cout<<ans<<endl;
        }
        
    }
    return 0;
}