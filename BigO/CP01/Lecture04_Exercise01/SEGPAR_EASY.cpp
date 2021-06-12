#include <iostream>
#include <vector>

using namespace std;

bool canFill(long long capacity, vector<int> &a, int k){
    long long container = 0;
    int numberOfContainer = 0;
    for (int i = 0; i < a.size(); i++){
        if (a[i] > capacity) return false;
        if (container + a[i] > capacity)
            container = 0;
        if (container == 0) numberOfContainer++;
        if (numberOfContainer > k) return false;

        container += a[i];
    }
    return true;
}

long long binarySearch(vector<int> &a, long long total, int k){
    long long low = 0;
    long long high = total;
    long long res = -1;

    while (low <= high){
        long long mid = (low + high) / 2;
        if (canFill(mid, a, k)){
            res = mid;
            high = mid - 1;
        } else low = mid + 1;
    }

    return res;
}

int main(){
    vector<int> a;
    int n, k;
    long long total;
    cin >> n >> k;
    a.resize(n);
    total = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        total += a[i];
    }
    cout << binarySearch(a, total, k) << endl;
    return 0;
}