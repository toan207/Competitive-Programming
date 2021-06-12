#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        long long a,b,c; cin>>a>>b>>c;
        long long temp = (a + b + c)/7;
        if ((a + b + c)%9==0 && min(min(a,b),c) > (a+b+c)/9)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}