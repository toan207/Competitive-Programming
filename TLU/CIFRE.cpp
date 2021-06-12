#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V; cin>>V;
    string N; cin>>N;
    int led[10] = {6,2,5,5,4,5,6,3,7,6};
    int pd[10][7] = {
        {1,1,1,1,1,1,0},{0,1,1,0,0,0,0},{1,1,0,1,1,0,1},{1,1,1,1,0,0,1},{0,1,1,0,0,1,1},
        {1,0,1,1,0,1,1},{1,0,1,1,1,1,1},{1,1,1,0,0,0,0},{1,1,1,1,1,1,1},{1,1,1,1,0,1,1}            
                    };
    if (V == 1)
    {
        long long ans = 0;
        for (char i: N)
            ans += led[i-'0'];
        cout<<ans<<endl;
    }
    else
    {
        vector<int> small, large;
        for (char i: N)
        {
            int more = 0, less = 0;
            for (int j = 0; j<10; ++j)
                if (led[j] > led[i-'0'])
                {
                    int f = 1;
                    for (int k = 0; k<7; ++k)
                        if(pd[j][k] == 0 && pd[i-'0'][k] == 1)
                        {
                            f = 0;
                            break;
                        }
                    (j > i-'0') ? more+=f : less+=f;
                }
            small.push_back(less);
            large.push_back(more);
        }
        unsigned long long count = 0;
        for (int i = 0; i<large.size(); i++)
        {
            long long temp = large[i];
            for (int j = i+1; j<small.size(); j++)
                temp *= large[j] + small[j] + 1;
            count += temp;
        }
        cout<<count<<endl;
    }
    return 0;
}