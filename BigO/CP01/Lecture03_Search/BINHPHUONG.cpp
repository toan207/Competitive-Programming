#include <bits/stdC++.h>
using namespace std;
#define name "10"
const long long INF = 1e12;

int id;
long long k;

bool isValid(long long x){
    long long index = 0;
    for (long long i = 1; (i * i < x && i <= 1e6); i++){
        long long y = sqrt(x - i * i);
        index += y;
    }
    return index < k;
}

long long findNumber(long long k){
    long long res = 0, l = 0, r = INF;
    while (l <= r){
        long long mid = (l + r) / 2;
        if (isValid(mid)){
            res = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }
    return res;
}

int main(){
    //freopen(name".in", "r", stdin);
    //freopen(name".ans", "w", stdout);
    cin >> id;
    cin >> k;
    cout << findNumber(k) + 1 << endl;
}