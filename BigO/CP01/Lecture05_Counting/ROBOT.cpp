#include <bits/stdc++.h>

typedef long long ll;
const double PI = acos(-1.0);
const int N = 1e6 + 1000;
const int oo = 1e9;

using namespace std;
struct ii{
    int x, y;
};
ii a[N];
int numCover[N];
vector <int> specialPoint;

vector<int>coordinate;

int convert(int x){
    return (lower_bound (coordinate.begin(), coordinate.end(), x) - coordinate.begin());
}

bool isValid(int i, int l, int r){
    if (l <= i && i <= r)return true;
    return false;
}

bool cmp(ii a, ii b){
    return a.x < b.x;
}

int n, L, R;

bool check(int l, int r){
    int lIndex = lower_bound(specialPoint.begin(), specialPoint.end(), l) - specialPoint.begin();
    int rIndex = upper_bound(specialPoint.begin(), specialPoint.end(), r) - specialPoint.begin();
    if (lIndex == specialPoint.size()){
        return true;
    }
    if (rIndex == 0){
        return true;
    }
    if (lIndex == rIndex)return true;
    return false;
}

int main(){

    cin >> n >> L >> R;
    coordinate.push_back(L);
    coordinate.push_back(R);
    for (int i = 1; i <= n; i++){
        cin >> a[i].x >> a[i].y;
        coordinate.push_back(a[i].x);
        coordinate.push_back(a[i].y);
        assert(a[i].x < a[i].y);
    }
    //discretized array
    sort(coordinate.begin(), coordinate.end());
    coordinate.resize(unique(coordinate.begin(), coordinate.end()) - coordinate.begin());

    L = convert(L);
    R = convert(R);

    //Calculate number segment cover
    for (int i = 1; i <= n; i++){
        a[i].x = convert(a[i].x);
        a[i].y = convert(a[i].y);

        numCover[a[i].x]++;
        numCover[a[i].y + 1]--;
    }


    int numPoint = coordinate.size();
    for (int i = 1; i < numPoint; i++){
        numCover[i] += numCover[i - 1];
    }
    for (int i = 0; i < numPoint; i++){
        if (isValid(i, L, R) && numCover[i] <= 1){
            specialPoint.push_back(i);
        }
    }


    int res = 0;
    for (int i = 1; i <= n; i++){
        if (check(a[i].x, a[i].y)){
            //cerr << coordinate[a[i].x] << " " << coordinate[a[i].y] << "\n";
            res = max(res, coordinate[a[i].y] - coordinate[a[i].x]);
        }
    }
    cout << res;

}
