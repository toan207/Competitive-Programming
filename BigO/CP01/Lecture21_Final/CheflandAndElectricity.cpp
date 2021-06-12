#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int main()
{
    int T; cin>>T;
    while(T--)
    {
        vector<long long> cor;
        int check[100001];
        long long n, wires = 0, k = 0; cin>>n;
        string el; cin>>el;
        for(int i = 0; i<n; ++i)
        {
            if(el[i] == '1')
                check[k++] = i + 1;
        }
        cor.push_back(-1);
        for(int i = 0; i<n; ++i)
        {
            long long x; cin>>x;
            cor.push_back(x);
        }
        for(int i = 0; i < k-1; ++i)
        {
            long long int f = 0;
            for(int j = check[i] + 1; j <= check[i+1]; ++j)
            {
                f = max(f,cor[j] - cor[j-1]);
            }
            wires = wires + cor[check[i+1]] - cor[check[i]] - f;
        }
        wires = wires + cor[check[0]] - cor[1];
        wires = wires + cor[n] - cor[check[k-1]];
        cout<<wires<<endl;
    }
    return 0;
}