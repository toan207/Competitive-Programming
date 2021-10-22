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

using Board = vector<vector<string> >;
int len;

void printBoard(Board& b) {
    int len = b.size();
    cout << ".";
    FOR(i,0,len) cout << ((i != len - 1) ? "===" : "==");
    cout << "." << endl;
    FOR(i,0,len) {
        cout << "|";
        FOR(j,0,len)
            cout << b[i][j] << ((j != len - 1) ? " " : "");
        cout << "|" << endl;
    }
    cout << ".";
    FOR(i,0,len) cout << ((i != len - 1) ? "===" : "==");
    cout << "." << endl;
}

void move(Board& b, int& x, int& y, char move) {
    if ((move == 'w' || move == 'W') && x != len - 1) {swap(b[x][y], b[x + 1][y]); ++x;}
    if ((move == 's' || move == 'S') && x > 0)   {swap(b[x][y], b[x - 1][y]); --x;}
    if ((move == 'a' || move == 'A') && y != len - 1) {swap(b[x][y], b[x][y + 1]); ++y;}
    if ((move == 'd' || move == 'D') && y > 0)   {swap(b[x][y], b[x][y - 1]); --y;}
}

bool check(Board& b, Board& ans) {
    FOR(i,0,len) FOR(j,0,len) if (b[i][j] != ans[i][j]) return false;
    return true;
}

int main()
{
    cout << "Nhap vao do lon cua ma tran: ";
    cin >> len;
    Board ans(len, vector<string>(len)); ans[0][0] = "..";
    int num = 1;
    FOR(i,0,len) {
        FOR(j,0,len) {
            if (i == 0 && j == 0) continue;
            if (num < 10) ans[i][j] = "0" + to_string(num++);
            else ans[i][j] = to_string(num++);
        }
    }
    vector<string> nums;
    vector<int> flags(len*len); num = 1; nums.push_back("..");
    FOR(i,1,len*len) nums.push_back((num < 10) ? "0" + to_string(num++) : to_string(num++));
    Board play(len, vector<string>(len));
    FOR(i,0,len) FOR(j,0,len) {
        int random = rand() % (len*len);
        while (flags[random]) random = rand() % (len*len);
        flags[random] = 1;
        play[i][j] = nums[random];
    }
    int posX, posY;
    FOR(i,0,len) FOR(j,0,len) if (play[i][j] == "..") {posX = i, posY = j; break;}
    system("cls");
    printBoard(play);
    while (!check(play, ans)) {
        cout << "Nhap phim dieu huong (w/a/s/d): ";
        char m; cin >> m; move(play,posX,posY,m);
        system("cls");
        printBoard(play);
    }
    return 0;
}