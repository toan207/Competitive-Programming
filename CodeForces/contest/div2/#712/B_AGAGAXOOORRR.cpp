#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        int n; cin>>n;
        vector<long long> a(n);
        long long ans = 0, temp = 0;
        for (int i = 0; i<n; ++i)
        {
            cin>>a[i];
            ans ^= a[i];
        }
        if (!ans)
            cout<<"YES"<<endl;
        else
        {
            int count = 0;
            for (int i = 0; i<n; ++i)
            {
                temp ^= a[i];
                if (temp == ans)
                {
                    temp = 0;
                    count++;
                }
            }
            if (count > 2)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}