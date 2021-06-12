#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        long long l,r,a=0,b=1; cin>>l>>r;
        while (a + b <= r)
        {
            a += b;
            b <<= 1;
        }
        if (a < l)
            a += b;
        b >>= 1;
        while (a>r)
        {
            if (a - b >= l)
                a -= b;
            b >>= 1;
        }
        cout<<a<<endl;
    }
    return 0;
}