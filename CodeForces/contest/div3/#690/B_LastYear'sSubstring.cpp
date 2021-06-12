#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        bool consist = false;
        for (int i = 0; i<=4; ++i)
        {
            int j = 4 - i;
            if (s.substr(0,i) + s.substr(n - j) == "2020")
                consist = true;
        }
        cout<<(consist ? "YES" : "NO")<<endl;
    }
    return 0;
}