//https://codeforces.com/problemset/problem/1367/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        string n; cin>>n;
        int f = 0;
        string s = "";
        for (int i = 0; i<n.length(); i += 2)
            s += n[i];
        s += n[n.length()-1];
        cout<<s<<endl;
    }
    return 0;
}