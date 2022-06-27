//https://codeforces.com/problemset/gymProblem/101466/A
#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed << setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(), a.end()
#define FOR(i, a, n) for (int i = a; i < n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

struct node
{
    node *child[10];
};

node *root;

node *createNode()
{
    node *ret = new node();
    for (int i = 0; i < 10; ++i)
        ret->child[i] = NULL;
    return ret;
}

void add(const string &s)
{
    node *p = root;
    for (int i = 0; i < s.size(); ++i)
    {
        int digit = s[i] - '0';
        if (p->child[digit] == NULL)
        {
            p->child[digit] = createNode();
        }
        p = p->child[digit];
    }
}

ll findMin(const string s)
{
    node *p = root;
    ll ans = 0;
    for (int i = 0; i < 19; ++i)
    {
        ll mi = 10;
        int mark = 0;
        for (int j = 0; j < 10; ++j)
        {
            if (p->child[j] && mi > ((s[i] - '0') + j) % 10)
            {
                mi = ((s[i] - '0') + j) % 10;
                mark = j;
            }
        }
        ans = ans * 10 + mi;
        p = p->child[mark];
    }
    return ans;
}

ll findMax(const string s)
{
    node *p = root;
    ll ans = 0;
    for (int i = 0; i < 19; ++i)
    {
        ll mx = -1;
        int mark = 0;
        for (int j = 0; j < 10; ++j)
        {
            if (p->child[j] && mx < ((s[i] - '0') + j) % 10)
            {
                mx = ((s[i] - '0') + j) % 10;
                mark = j;
            }
        }
        ans = ans * 10 + mx;
        p = p->child[mark];
    }
    return ans;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    root = createNode();
    ll mx = 0, mi = 2e18 + 5;
    int n = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        string digit;
        cin >> digit;
        while (digit.size() < 19)
            digit = "0" + digit;
        if (i > 0)
        {
            mx = max(mx, findMax(digit));
            mi = min(mi, findMin(digit));
        }
        add(digit);
    }
    cout << mi << " " << mx << endl;
    return 0;
}