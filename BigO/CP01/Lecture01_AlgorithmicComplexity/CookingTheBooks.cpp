#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    for (int _ = 1; _<=t; ++_)
    {
        char num[15]; cin>>num;
        if (num[0] == '0')
        {
            cout<<"Case #"<<_<<": 0 0"<<endl;
            continue;
        }
        int mi = 10, ma = 0, posMi, posMa, pos0;
        for (int i = 0; i<strlen(num); ++i)
        {
            if (mi > num[i] - '0')
                pos0 = i;
            if (mi >= num[i] - '0')
            {
                mi = num[i] - '0';
                posMi = i;
            }
            if (ma < num[i] - '0')
            {
                ma = num[i] - '0';
                posMa = i;
            }
        }
        cout<<"Case #"<<_<<": ";
        char mark = num[posMi];
        if (num[posMi] == '0')
            swap(num[1], num[posMi]);
        else
            swap(num[0],num[posMi]);
        for (int i = 0; i<strlen(num); ++i)
            cout<<num[i];
        if (mark == '0')
            swap(num[1], num[posMi]);
        else
            swap(num[0],num[posMi]);
        char temp[15];
        for (int i = 0; i<strlen(num); ++i)
            temp[i] = num[i];
        swap(num[0],num[posMa]);
        int f=0;
        for (int i = 0; i<strlen(num); ++i)
            if (temp[i] != num[i])
            {
                f = 1;
                break;
            }
        if (!f)
            swap(num[strlen(num)-1], num[pos0]);
        cout<<" ";
        for (int i = 0; i<strlen(num); ++i)
            cout<<num[i];
        cout<<endl;
        
    }
    return 0;
}