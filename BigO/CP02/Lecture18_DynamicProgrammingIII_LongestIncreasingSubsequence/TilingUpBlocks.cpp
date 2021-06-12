#include <bits/stdc++.h>
using namespace std;

#define PROB "Blocks"
#define MAXN 105

int dp[MAXN][MAXN], cnt[MAXN][MAXN];

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        for(int i = 1; i <= 100; i++){
            fill(dp[i], dp[i]+100+1, 0);
            fill(cnt[i], cnt[i]+100+1, 0);
        }
        for(int i = 0; i < n; i++){
            int l, m;
            cin >> l >> m;
            cnt[l][m]++;
        }
        for(int i = 1; i <= 100; i++) {
            for(int j = 1; j <= 100; j++) {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                dp[i][j] += cnt[i][j];
            }
        }
        cout << dp[100][100]<<'\n';
    }
    puts("*");
}