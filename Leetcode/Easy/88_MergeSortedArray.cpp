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

class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int a=m-1;
        int b=n-1;
        int i=m+n-1;

        while(a>=0 && b>=0){
            if(A[a]>B[b]) A[i--] = A[a--];
            else A[i--] = B[b--];
        }
        
        while(b>=0) A[i--] = B[b--];
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}