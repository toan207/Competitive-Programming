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
#define FOR(i,a,n) for(int i = a; i<n; ++i)
#define SORT(a) sort(a.begin(), a.end())
#define MOD 1000000007

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int T; cin>>T;
    
    vector<int> height;
    vector<int> width;
    vector<int> ascendingWidth;
    vector<int> descendingWidth;
    
    for (int t = 1; t <= T; ++t)
    {
        int N; cin>>N;
        vi dp(N + 1);
        height.resize(N);
        width.resize(N);
        for (int i = 0; i < N; ++i)
            cin >> height[i];
        for (int i = 0; i < N; ++i)
            cin >> width[i];
            
        int best = 0;
        
        for(int i = 0;i<N;++i){
            dp[i] = width[i];
            
            for(int j = 0;j<i;++j){
                if(height[j]<height[i] && width[i]+dp[j]>dp[i]){
                    dp[i] = width[i]+dp[j];
                }
            }
            
            if(dp[i]>dp[best]) best = i;
        }
        
        int ascending = dp[best];
        
        best = 0;
        
        for(int i = 0;i<N;++i){
            dp[i] = width[i];
            
            for(int j = 0;j<i;++j){
                if(height[j]>height[i] && width[i]+dp[j]>dp[i]){
                    dp[i] = width[i]+dp[j];
                }
            }
            
            if(dp[i]>dp[best]) best = i;
        }
        
        int descending = dp[best];
        
        if (ascending >= descending)
            cout << "Case " << t << ". Increasing (" << ascending << "). Decreasing (" << descending << ").\n";
        else
            cout << "Case " << t << ". Decreasing (" << descending << "). Increasing (" << ascending << ").\n";  
    }
    return 0;
}