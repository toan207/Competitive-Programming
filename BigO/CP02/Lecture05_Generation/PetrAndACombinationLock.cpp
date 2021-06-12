#include <bits/stdc++.h>
using namespace std;

int n, f = 0;
vector<int> a,bin;

void gen(int pos)
{
    if (pos == n)
    {
        int sum = 0;
        for (int i = 0; i<n; ++i)
        {
            if (bin[i])
            {
                sum += a[i];
                sum %= 360;
            }
            else
            {
                sum -= a[i];
                if (sum < 0)
                    sum = 360 + sum;
            }
        }
        if (sum == 0)
            f = 1;
        return;
    }
    for (int i = 0; i<2; ++i)
    {
        bin.push_back(i);
        gen(pos+1);
        bin.pop_back();
    }
}

int main()
{
    cin>>n;
    a.assign(n,0);
    for (int i = 0; i<n; ++i)
        cin>>a[i];
    gen(0);
    if (f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}