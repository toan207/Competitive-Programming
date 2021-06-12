#include <bits/stdc++.h>
using namespace std;

int f;

int get(unsigned long long u, int pos)
{
    return (u % (unsigned long long)pow(10,pos)) / (unsigned long long)pow(10,pos-1);
}

void find(int pos, unsigned long long u, unsigned long long l, vector<int> &num, bool isLower)
{
    if (pos == 0 && !f)
    {
        cout<<l<<endl;
        f = 1;
        return;
    }
    if (!f)
    {
        int x = get(u,pos);
        if (isLower == true)
            x = 9;
        for (int i = x; i >= 0; i--)
        {
            if (num[i] == 2)
                continue;
            num[i]++;
            bool curIsLower = isLower;
            if (curIsLower == false && i < x)
                curIsLower = true;
            find(pos-1, u, l + i*pow(10,pos-1),num, curIsLower);
            num[i]--;
        }
    }
}
int main()
{
    unsigned long long n;
    while (cin>>n)
    {
        unsigned long long t, pos = 0;
        vector<int> num;
        num.assign(10,0);
        t = n;
        while (t != 0)
        {
            pos++;
            t/=10;
        }
        f = 0;
        find(pos, n, 0, num, false);
        for (int i = 0; i<10; ++i)
            cout<<num[i]<<" ";
        cout<<endl;
    }
    return 0;
}