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
    int maxCompatibilitySum(vector<vector<int>>& students, vector<vector<int>>& mentors) {
        string s = "";
        for (int i = 0; i<students.size(); ++i) s += i + '0';
        int ans = 0;
        do
        {
            int temp = 0;
            for (int i = 0; i<students.size(); ++i)
            {
                int x = s[i] - '0';
                for (int j = 0; j<students[0].size(); ++j)
                    temp += students[i][j] == mentors[x][j];
                ans = max(temp,ans);
            }
        }while(next_permutation(s.begin(), s.end()));
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}