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

struct compareStr
{
    bool operator()(string &a, string &b)
    {
        return a.size() > b.size();
    }
};

priority_queue <string, vector<string>, compareStr> heap;
map<char, char> a = {{'a', 'b'},
                     {'b', 'b'},
                     {'c', 'a'}};

map<char, char> b = {{'a', 'c'},
                     {'b', 'b'},
                     {'c', 'a'}};

map<char, char> c = {{'a', 'a'},
                     {'b', 'c'},
                     {'c', 'c'}};

map<string, int> check;

void processString(string str)
{
    for (int i = 0; i<str.size(); ++i)
    {
        string temp = "";
        char mark = str[i];
        for (int j = 0; j < str.size(); ++j)
        {
            if (j < i)
                temp += str[j];
            else if (j > i)
                if (mark == 'a')
                    mark = a[str[j]];
                else if (mark == 'b')
                    mark = b[str[j]];
                else
                    mark = c[str[j]];
        }
        temp += mark;
        if (!check[temp])
            heap.push(temp);
        check[temp] = 1;
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    string s; cin>>s;
    heap.push(s);
    check[s] = 1;
    int f = s == "a";
    while (!heap.empty() && f == 0)
    {
        string temp = heap.top();
        heap.pop();
        processString(temp);
        while (!heap.empty() && heap.top().size() == 1)
        {
            if (heap.top() == "a")
            {
                f = 1;
                break;
            }
            heap.pop();
        }
        
    }
    cout<<((f) ? "YES" : "NO")<<endl;
    return 0;
}