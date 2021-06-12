#include <bits/stdc++.h>
using namespace std;

int sum(long long n)
{
    int ans = 0;
    while (n>0)
    {
        ans += n%10;
        n /= 10;
    }
    return ans;
}

long long countNumber(long long n)
{
    long long numCounter = 0;
    if (n < 1)
        return 0;
    if (n%10 == 0)
    {
        numCounter = countNumber(n/10) * 10 + 45 * (n/10);
        return numCounter;
    }
    numCounter = countNumber(n-1) + sum(n-1);
    return numCounter;
}

int main()
{
    int T; cin>>T;
    while (T--)
    {
        long long a,b; cin>>a>>b;
        cout<<countNumber(b+1) - countNumber(a)<<endl;
    }
    return 0;
}