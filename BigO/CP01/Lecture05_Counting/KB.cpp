#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    string s; cin>>s;
    if (n > 'z'-'a'+1)
        cout<<-1;
    else
    {
        int a[26]={0}, ans=0;
        for (char x: s)
        {
            if (a[x-'a'] > 0)
                ans++;
            a[x-'a']++;
        }
        cout<<ans;
    }
    
    return 0;
}