#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;

long long power(long long x,long long y,long long p)
{
    long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

int main()
{
    string s; cin>>s;
    long long temp = 0, sum = 0;
    for (int i = 0; i<s.size(); i++)
    {
        temp = ((temp*10)%MOD + (s[i] - '0'))%MOD;
        sum = sum%MOD + temp%MOD + (s[i]-'0');
        sum %= MOD;
    }
    temp = 0, sum = 0;
    long long j = 0;
    for (int i = s.size() - 1; i>=0; i--)
    {
        temp = (s[i] - '0') + (temp%MOD*power(10,j,MOD)%MOD)%MOD;
        temp %= MOD;
        sum = sum%MOD + temp%MOD + (s[i]-'0');
        sum %= MOD;
        j++;
    }
    cout<<sum<<endl;
    return 0;
}