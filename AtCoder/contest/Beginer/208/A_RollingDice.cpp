#include <iostream>
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
    int A,B; cin>>A>>B;
    int C = B;
    int d6 = B/6;
    B -= d6*6;
    int d5 = B/5;
    B -= d5*5;
    int d4 = B/4;
    B -= d4*4;
    int d3 = B/3;
    B -= d3*3;
    int d2 = B/2;
    B -= d2*2;
    int sm = d6 + d5 + d4 + d3 + d2 + B;
    if (sm <= A && C >= A)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
    return 0;
}