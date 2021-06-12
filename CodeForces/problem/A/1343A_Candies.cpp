//https://codeforces.com/problemset/problem/1343/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        long long n; cin>>n;
        long long temp = 3, d2 = 2;
        while (n%temp)
        {
            d2 <<= 1;
            temp += d2;
        }
        cout<<n/temp<<endl;
    }
    return 0;
}