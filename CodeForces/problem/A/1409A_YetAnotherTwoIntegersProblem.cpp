//https://codeforces.com/problemset/problem/1409/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        long long a,b; cin>>a>>b;
        if (abs(a-b)%10)
            cout<<(int)(abs(a-b)/10) + 1<<endl;
        else
            cout<<(int)(abs(a-b)/10)<<endl;
    }
    return 0;
}