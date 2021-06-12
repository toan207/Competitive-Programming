#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a,b; cin>>a>>b;
    vector<int> A(26),B(26);
    long long ans=0;
    for (char x:a)
        A[(x - 'a')]++;
    for (char y:b)
        B[(y - 'a')]++;
    for (char i = 'a'; i<='z'; ++i)
        ans += abs(A[i-'a']-B[i-'a']);
    cout<<ans;
}