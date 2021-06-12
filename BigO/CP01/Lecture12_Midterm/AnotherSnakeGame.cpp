#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    while (n--)
    {
        string s; cin>>s;
        int a[26];
        for (int j = 0; j<26; ++j)
            a[j] = 0;
        int po = 0, mark = 0, z = 0;
        for (int i = 0; i<s.size(); ++i)
        {
            if (a[s[i] - 'a'])
            {
                po = max(mark, po);
                while (s[z] != s[i])
                {
                    a[s[z] - 'a'] = 0;
                    mark--;
                    z++;
                }
                z++;
            }
            else
            {
                mark++;
                a[s[i] - 'a']++;
            }
        }
        po = max(mark, po);
        cout<<po<<endl;
    }
    return 0;
}