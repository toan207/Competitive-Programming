#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        int n; cin>>n;
        map <int,int> a;
        for (int i = 0; i<n; ++i)
        {
            int temp; cin>>temp;
            if (a.find(temp) == a.end())
                a[temp] = 0;
            a[temp]++;
        }
        map <int,int>::iterator it;
        long long count=0;
        for (it = a.begin(); it != a.end(); ++it)
            count += (it->second * (it->second + 1))/2;
        cout<<count<<endl;
    }
    return 0;
}