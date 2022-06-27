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
    node *child[2];
    int cnt;
};

node *root;

node *createNode()
{
    node *ret = new node();
    for (int i = 0; i < 2; ++i)
    {
        ret->child[i] = NULL;
        ret->cnt = 0;
    }
    return ret;
}

void add(string s)
{
    node *p = root;
    for (int i = 0; i < s.size(); ++i)
    {
        int bit = s[i] - '0';
        if (!(p->child[bit]))
            p->child[bit] = createNode();
        p = p->child[bit];
        p->cnt++;
    }
}

int main()
{
    int q;
    cin >> q;
    root = createNode();
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            ll x;
            cin >> x;
            string s = "";
            while (x)
            {
                int bit = x & 1;
                s = (char)('0' + bit) + s;
                x >>= 1;
            }
            while (s.size() < 63)
                s = '0' + s;
            add(s);
        }
        if (type == 2)
        {
            ll x, k;
            cin >> x >> k;
            string s = "";
            while (x)
            {
                int bit = x & 1;
                s = (char)('0' + bit) + s;
                x >>= 1;
            }
            while (s.size() < 63)
                s = '0' + s;
            node *p = root;
            ll getNumKth = 0;
            for (char i : s)
            {
                int bit = i - '0';
                if (p->child[bit])
                {
                    if (p->child[bit]->cnt < k)
                    {
                        k -= p->child[bit]->cnt;
                        p = p->child[!bit];
                        getNumKth |= 1;
                        getNumKth <<= 1;
                    }
                    else
                    {
                        p = p->child[bit];
                        getNumKth <<= 1;
                    }
                }
                else
                {
                    p = p->child[!bit];
                    getNumKth |= 1;
                    getNumKth <<= 1;
                }
            }
            cout << getNumKth / 2 << endl;
        }
    }
    return 0;
}