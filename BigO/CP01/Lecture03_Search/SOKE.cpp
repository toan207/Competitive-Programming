#include <bits/stdc++.h>

using namespace std;

long long findIndex(long long n){
    long long res = n / 3 + n / 5 + n / 7;
    res -= n / 15 + n / 21 + n / 35;
    res += n / 105;
    return res;
}

long long calc(long long n){
    long long l = 3;
    long long r = 1e16;
    while (l <= r){
        long long mid = (l + r) / 2;
        long long index = findIndex(mid);
        if (index == n && (mid % 3 == 0 || mid % 5 == 0 || mid % 7 == 0)){
            return mid;
        }
        if (index < n){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return -1;
}
int main(){
    long long n;
    int id;
    cin >> id;
    cin >> n;
    cout << calc(n) << "\n";
}
