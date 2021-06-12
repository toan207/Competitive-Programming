#include<bits/stdc++.h>

using namespace std;

int mintot( string s, int sz)
{
    int small = INT_MAX;
    for(int i=0; i<sz-1; i++)
    {
        small = min(small, abs((int)s[i] - (int)s[i+1]));
    }
    return small;
}

int main()
{
    string str, str2, res_str;
    while(getline(cin, str))
    {
        str2 = str;
        int maxlength = INT_MIN, len;
        int sz = str.size();
        len = mintot(str, sz);
        if(len>maxlength)
        {
            maxlength = len;
            res_str = str;
        }
        for(int i=1; i<11 ; i++)
        {
            if(prev_permutation(str.begin(), str.end()))
            {
                len = mintot(str, sz);
                if(len>maxlength)
                {
                    maxlength = len;
                    res_str = str;
                }
                if(len==maxlength)
                {
                    res_str = min(str, res_str);
                }
            }
        }
        for(int i=1; i<11; i++)
        {
            if(next_permutation(str2.begin(), str2.end()))
            {
                len = mintot(str2, sz);
                if(len>maxlength)
                {
                    maxlength = len;
                    res_str = str2;
                }
            }
        }
        cout<<res_str<<maxlength<<endl;
    }
    return 0;
} 