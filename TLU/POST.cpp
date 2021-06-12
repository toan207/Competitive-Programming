#include <bits/stdc++.h>
using namespace std;

int mi = 1e5, n, p, mark = 0;

vector<int> s;

bool nextPermutation()
{
    int i = s.size() - 2;
    while(i>=0 && s[i] >= s[i+1]) i--;
    if (i < 0)
        return false;
    int k = s.size() - 1;
    while (s[k] <= s[i]) k--;
    swap(s[k],s[i]);
    i++;
    reverse(s.begin() + i, s.end());
    return true;
}

int main()
{
    cin>>n>>p;
    s.assign(n, 0);
    for (int i = 0; i<n; ++i) cin>>s[i];
    sort(s.begin(), s.end());
    do
    {
        int temp = 0, mark = 0;
        for (int i = 0; i<n; i++)
        {
            temp += s[i];
            if (temp >= 1000)
            {
                if (temp == 1000)
                    mark += p;
                else
                    mark += temp;
                temp = 0;
            }
        }
        mark += temp;
        mi = min(mi, mark);
    }while(nextPermutation());
    cout<<mi<<endl;
    return 0;
}