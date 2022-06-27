#include <bits/stdc++.h>
using namespace std;

long long f[20][9*20][9*20][3];
bool isPrime[9*20];

string sN;
long long N;

bool prime(int n) {
    if (n < 2) return false;
    for (int j = 2; j * j <= n; j++)
        if (n % j == 0) return false;
    return true;
}

long long cal(int id, int sumX, int sumY, int rem) {
    if (id == sN.size()) {
        return (isPrime[sumX] && isPrime[sumY] && rem == 0);
    }

    long long &foo = f[id][sumX][sumY][rem];
    if (foo != -1) return foo; foo = 0;

    for (int dx = 0; dx < 10; dx++) {
        for (int dy = 0; dy < 10; dy++) {
            int cur = dx + 2 * dy + rem;
            if (cur % 10 != (sN[id] - '0')) continue;
            foo += cal(id+1, sumX + dx, sumY + dy, cur / 10);
        }
    }

    return foo;
}

int sumDigit(int t) {
    int s = 0;
    while (t > 0) s += t % 10, t /= 10;
    return s;
}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);  cout.tie(0);

    for (int i = 0; i < 9*20; i++)
        isPrime[i] = prime(i);

    cin >> N;
    sN = to_string(N);
    reverse(sN.begin(), sN.end());

    memset (f, -1, sizeof f);
    long long res = cal(0, 0, 0, 0);

    cout << res << '\n';

    return 0;
}
