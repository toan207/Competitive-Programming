#include <bits/stdc++.h>

using namespace std;
#define PROB "Safety"
#define MAXN 205
int s[MAXN];

bool check(int n, int i, int sum, double mid){
    double F = s[i] + (double)sum*mid;
    double prob = mid;
    for(int j = 1; j <= n; j++){
        if(j == i)  continue;
        prob += (double)max(0.0, F - s[j])/sum;
    }
    return (prob >= 1);
}

double Find(int n, int i, int sum){
    double L = 0.0, R = 1.0;
    for(int iter = 1; iter <= 100; iter++){
        double mid = (L+R) / 2.0;
        if(check(n, i, sum, mid))
            R = mid;
        else L = mid;
    }
    return R;
}

int main(){
    int nTest;
    cin >> nTest;
    for(int iTest = 1; iTest <= nTest; iTest++){
        int n; cin >> n;
        int sum = 0;
        for(int i = 1; i <= n; i++){
            cin >> s[i];
            sum += s[i];
        }
        cout << "Case #" << iTest << ": ";
        for(int i = 1; i <= n; i++){
            double percent = Find(n, i, sum);
            cout << fixed << setprecision(6) << percent*100 << ' ';
        }
        cout << '\n';
    }
}