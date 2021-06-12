#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n, a, e=0,o=0; cin>>n;
        while (n--)
        {
            cin>>a;
            o += a%2;
            e += abs(a%2 - 1);
        }
        if (o%2==0)
            if ((e%2 && o>=2) || e%2==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}