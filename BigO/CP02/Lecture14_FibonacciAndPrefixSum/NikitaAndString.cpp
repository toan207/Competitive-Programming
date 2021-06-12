#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define nl '\n'
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s; cin>>s;
    int a = 0, ab = 0, aba = 0;
    for (char i: s)
    {
        if (i == 'a')
            a++, aba++;
        else
            ab++;
        aba = max(ab, aba);
        ab = max(ab, a);
    }
    cout<<aba;
    return 0;
}