#include<bits/stdc++.h>
using namespace std;
int x, f = 1;
long long ans;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>x;
        ans = 223456789;
        if (x > 45)
        {
            cout<<-1<<endl;
            continue;
        }
        if (x<10)
        {
            cout<<x<<endl;
            continue;
        }
        int i = 9;
        string a="";
        while (x > i)
        {
            a = (char)(i + '0') + a;
            x -= i--;
        }
        cout<<x<<a<<endl;
    }
    return 0;
}