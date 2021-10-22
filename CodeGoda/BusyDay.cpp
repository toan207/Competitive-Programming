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
#define MAX 4000000

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int N; cin>>N;
    int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int year[10000] = {0};
    int mark = 0;
    vi countDay(MAX);
    for (int y = 1; y <= 9999; ++y)
    {
        year[y] = mark;
        if ((y%4 == 0 && y%100) || y%400 == 0)
            mark += 366;
        else
            mark += 365;
    }
    for (int i = 0; i<N; ++i)
    {
        int d,m,y,d1,m1,y1,pos = 0;
        char x;
        cin>>y>>x>>m>>x>>d;
        cin>>y1>>x>>m1>>x>>d1;
        if ((y%4 == 0 && y%100) || y%400 == 0)
            month[2] = 29;
        else
            month[2] = 28;
        for (int j = 0; j<m; ++j)
            pos += month[j];
        pos += d + year[y];
        countDay[pos] += 1;
        pos = 0;
        if ((y1%4 == 0 && y1%100) || y1%400 == 0)
            month[2] = 29;
        else
            month[2] = 28;
        for (int j = 0; j<m1; ++j)
            pos += month[j];
        pos += d1 + year[y1];
        countDay[pos] -= 1;
    }
    int ans = 0, temp = 0, pos = 1;
    for (int i = 0; i<MAX; ++i)
    {
        temp += countDay[i];
        if (ans < temp)
        {
            ans = max(ans, temp);
            pos = i;
        }
    }
    int i = 0;
    for (int y = 1; y <= 9999 && pos > 366; ++y)
    {
        if ((y%4 == 0 && y%100) || y%400 == 0)
            pos -= 366;
        else
            pos -= 365;
        i = y;
    }
    ++i;
    if (!((i%4 == 0 && i%100) || i%400 == 0) && pos > 365)
    {
        ++i;
        pos -= 365;
    }
    if ((i%4 == 0 && i%100) || i%400 == 0)
        month[2] = 29;
    else
        month[2] = 28;
    int m = 0;
    while (pos > 31)
    {
        pos -= month[m];
        ++m;
    }
    if (pos > month[m])
    {
        pos -= month[m];
        ++m;
    }
    string ye="0000";
    int ky = 3;
    while(i)
    {
        ye[ky] = i%10 + '0';
        i /= 10;
        ky--;
    }
    cout<<ye<<"-";
    if (m < 10)
        cout<<"0"<<m<<"-";
    else
        cout<<m<<"-";
    if (pos < 10)
        cout<<"0"<<pos<<endl;
    else
        cout<<pos<<endl;
    return 0;
}