#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const* argv[])
{
    int n;
    cin >> n;
    vector<int> cake(n);
    for (int  i = 0; i < n; i++){
        cin >> cake[i];
    }
    sort(cake.begin(), cake.end(), greater<int>());
    int lo = n/2;
    int hi = n;
    while (lo < hi) {
        int mi = lo + (hi -lo)/2;
        bool valid = true;
        if (mi < n - mi) {
            valid = false;
        }
        for (int i = 0; i < n -mi; i++) {
            if (cake[i] < 2* cake[i + mi])
                valid = false;
        }
        if (valid)
            hi = mi;
        else
            lo = mi+1;
    }
    cout << hi;
    return 0;
}