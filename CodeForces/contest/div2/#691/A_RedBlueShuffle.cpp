#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        char r[1001], b[1001];
        for (int i = 0; i<n; ++i) cin>>r[i];
        for (int i = 0; i<n; ++i) cin>>b[i];
        int cR = 0, cB = 0;
        for (int i = 0; i<n; ++i)
        {
            if (r[i] < b[i])
                cB++;
            else if (r[i] > b[i])
                cR++;
        }
        if (cR>cB)
            cout<<"RED"<<endl;
        else if (cB>cR)
            cout<<"BLUE"<<endl;
        else
            cout<<"EQUAL"<<endl;
    }
    
    return 0;
}