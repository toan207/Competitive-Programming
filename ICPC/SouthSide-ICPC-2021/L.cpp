#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    if (fopen("main.in", "r"))
        freopen ("main.in", "r", stdin),
        freopen ("main.out", "w", stdout);

    int n; cin >> n;
    vector <int> a(n);

    for (int &x: a) cin >> x;

    multiset <int> odd, even;
    long long sumOdd = 0, sumEven = 0;
    for (int x: a) {
        if (x & 1) {
            odd.insert(x);
            sumOdd += x;
        }
        else {
            even.insert(x);
            sumEven += x;
        }
    }

    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') {
            sumOdd = 0;
            for (auto it : odd) if (it > 1) {
                even.insert(it-1);
                sumEven += it - 1;
            }
            odd.clear();
        }
        else {
            vector <int> tmp;
            vector <int> saveEven;
            sumEven = 0;
            for (auto it : even) {
                if ((it / 2) & 1) {
                    sumOdd += it / 2;
                    odd.insert(it / 2);
                }
                else {
                    tmp.push_back(it / 2);
                    sumEven += it / 2;
                }
            }
            even.clear();
            for (auto it : tmp) even.insert(it);
        }

        //cout << " # " << sumEven << ' ' << sumOdd << '\n';

        cout << sumEven + sumOdd << '\n';
    }

    return 0;
}
