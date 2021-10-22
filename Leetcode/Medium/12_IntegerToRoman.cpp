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
    string intToRoman(int num) {
        string ans = "";
        while (num >= 1000)
        {
            ans += "M";
            num -= 1000;
        }
        if (num >= 900)
        {
            ans += "CM";
            num -= 900;
        }
        if (num >= 500)
        {
            ans += "D";
            num -= 500;
        }
        if (num >= 400)
        {
            ans += "CD";
            num -= 400;
        }
        while (num >= 100)
        {
            ans += "C";
            num -= 100;
        }
        if (num >= 90)
        {
            ans += "XC";
            num -= 90;
        }
        if (num >= 50)
        {
            ans += "L";
            num -= 50;
        }
        if (num >= 40)
        {
            ans += "XL";
            num -= 40;
        }
        while (num >= 10)
        {
            ans += "X";
            num -= 10;
        }
        if (num >= 9)
        {
            ans += "IX";
            num -= 9;
        }
        if (num >= 5)
        {
            ans += "V";
            num -= 5;
        }
        if (num >= 4)
        {
            ans += "IV";
            num -= 4;
        }
        while (num >= 1)
        {
            ans += "I";
            num--;
        }
        return ans;
    }
};

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    return 0;
}