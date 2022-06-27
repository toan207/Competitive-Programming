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
    int numDifferentIntegers(string word) {
        set<string> nums;
        for (int i = 0; i < word.size(); ++i) {
            if (word[i] >= '0' && word[i] <= '9') {
                string curr;
                while (word[i] == '0')
                    i++;
                while (word[i] >= '0' && word[i] <= '9')
                    curr += word[i++];
                nums.insert(curr);
            }
        }
        return nums.size();
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}