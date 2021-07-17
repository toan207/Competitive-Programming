#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s; cin>>s;
    vl nums;
    vector<char> c;
    ll temp = 0;
    for (char x: s)
    {
        if (x >= '0' && x <= '9')
            temp = temp*10 + (x-'0');
        else
        {
            nums.push_back(temp);
            temp = 0;
            c.push_back(x);
        }
    }
    nums.push_back(temp);
    vi check(nums.size());
    vl mul;
    temp = 1;
    int f = 0;
    ll sm = 0;
    for (int i = 0; i<c.size(); ++i)
    {
        if (c[i] == 'x' || c[i] == '*' || c[i] == 'X')
        {
            temp *= nums[i];
            if (!f)
                check[i] = 1;
            f = 1;
        }
        else if (f)
        {
            temp *= nums[i];
            check[i] = 2;
            mul.push_back(temp);
            temp = 1;
            f = 0;
        }
        else
            sm += nums[i];
    }
    if (f)
    {
        check[nums.size()-1] = 2;
        temp *= nums[nums.size()-1];
        mul.push_back(temp);
    }
    else
        sm += nums[nums.size()-1];
    for (ll i: mul)
        sm += i;
    for (int i = 0; i<check.size(); ++i)
    {
        if (check[i] == 1)
            cout<<"("<<nums[i]<<" x ";
        else if (check[i] == 2)
        {
            cout<<nums[i]<<")";
            if (i != check.size() - 1)
                cout<<" + ";
        }
        else
        {
            cout<<nums[i];
            if (i < c.size())
                cout<<" "<<c[i]<<" ";
        }
    }
    cout<<" = "<<sm<<endl;
    return 0;
}