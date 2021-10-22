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

bool cmp(double x, double y) {
    return (x + EPS < y) ? -1 : (x > y + EPS);
}

struct Point {
    int x,y;
    Point(double _x = 0, double _y = 0) : x(_x), y(_y) {}
    int cmp(Point& q) {
        if (x != q.x) return ::cmp(x,q.x);
        return ::cmp(y,q.y);
    }
    #define op(x) bool operator x (Point& q) { return cmp(q) x 0; }
    op(>) op(<) op(==) op(!=) op(<=) op(>=)
    #undef op
};

struct City {
    string name;
    Point position;
    City(string _name = "", Point q = Point()) : name(_name), position(q) {}
    double dist(City& c) {
        return sqrt((position.x - c.position.x) * (position.x - c.position.x) + (position.y - c.position.y) * (position.y - c.position.y));
    }
};

istream& operator >> (istream& in, Point& q) {
    return in >> q.x >> q.y;
}

istream& operator >> (istream& in, City& c) {
    return in >> c.name >> c.position;
}

using WorldMap = vector<City>;

int Menu() {
    cout << ".=========================." << endl;
    cout << "|  1. Them thanh pho      |" << endl;
    cout << "|  2. Xem ban do          |" << endl;
    cout << "|  0. Thoat chuong trinh  |" << endl;
    cout << ".=========================." << endl;
    cout << "Chon chuc nang: ";
    int option; cin >> option;
    return option;
}

WorldMap wm;

void AddCityToMap() {
    cout << "Nhap thong tin thanh pho (Ten + toa do): ";
    City c; cin >> c;
    wm.push_back(c);
}

void ShowMap() {
    FOR(i,0,wm.size()) cout << "\t" << wm[i].name;
    cout << endl;
    FOR(i,0,wm.size()) {
        cout << wm[i].name;
        FOR(j,0,wm.size()) {
            cout << "\t";
            if (i == j) cout << 0;
            else cout<< fixed << setprecision(2) <<wm[i].dist(wm[j]);
        }
        cout << endl;
    }
}

int main()
{
    system("cls");
    while (true) {
        int option = Menu();
        system("cls");
        if (option == 1)
            AddCityToMap();
        else if (option == 2)
            ShowMap();
        else if (option == 0)
            break;
        else
            cout << "Chua co chuc nang nay! Vui long chon lai." << endl;
        cout << "Nhap ki tu bat ki de tiep tuc" << endl;
        string s;
        getline(cin,s);
        cin.get();
        system("cls");
    }
    return 0;
}