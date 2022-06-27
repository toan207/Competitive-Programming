#include <bits/stdc++.h>
using namespace std;

#define fxdp fixed<<setprecision
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define pll pair<long, long>
#define mli map<long long, int>
#define msi map<string, int>
#define all(a) a.begin(),a.end()
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

const double EPS = 1e-9;

int cmp(double x, double y){
    return (x + EPS < y) ? -1 : (x > y + EPS);
}

struct Point{
    double x,y;
    Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}
    int cmp(const Point& q) const{
        if (x != q.x) return ::cmp(x,q.x);
        return ::cmp(y,q.y);
    }
    #define op(x) bool operator x (const Point& q) const { return cmp(q) x 0; }
    op(<) op(>) op(==) op(>=) op(<=) op(!=)
    #undef op
    Point operator- (const Point& q) const{
        return Point(x - q.x, y - q.y);
    }
    double cross(const Point& q) const {
        return x * q.y - y * q.x;
    }
};

using Polygon = vector<Point>;

int ccw(Point a, Point b, Point c){
    return cmp((b - a).cross(c - a), 0);
}

void convexHull(Polygon& pts){
    sort(all(pts));
    pts.erase(unique(all(pts)), pts.end());
    Polygon up, down;
    for (int i = 0; i < pts.size(); ++i){
        while(up.size() > 1 && ccw(up[up.size() - 2], up[up.size() - 1], pts[i]) >= 0)
            up.pop_back();
        up.push_back(pts[i]);
        while(down.size() > 1 && ccw(down[down.size() - 2], down[down.size() - 1], pts[i]) <= 0)
            down.pop_back();
        down.push_back(pts[i]);
    }
    pts = down;
    for(int i = up.size() - 2; i > 0; i--) pts.push_back(up[i]);
}

istream& operator >> (istream& is, Point& p){
    return is >> p.x >> p.y;
}

double signedArea(const Polygon& p) {
    double area = 0;
    for (int j, i = 0; i < p.size(); ++i) {
        j = (i + 1) % p.size();
        area += p[i].cross(p[j]);
    }
    return area / 2.0;
}

double area(const Polygon& p){
    return fabs(signedArea(p));
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n = 4, t; cin >> t;
    while(t--) {
        Polygon pts(n);
        FOR(i,0,n) cin>>pts[i];
        convexHull(pts);
        if (pts.size() == 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}