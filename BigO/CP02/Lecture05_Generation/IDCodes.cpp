#include <bits/stdc++.h>
using namespace std;

bool nextPermutation(string &s)
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
    string s;
    while (cin>>s)
    {
        if (s == "#")
            return 0;
        if (nextPermutation(s))
            cout<<s<<endl;
        else
            cout<<"No Successor"<<endl;
    }
    return 0;
}