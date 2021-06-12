#include <bits/stdc++.h>
using namespace std;

#define ll long long
vector<string> v1,v2;
ll dp[102][102];

ll lcs()
{
    for (int i = v1.size(); i >= 0; --i)
    {
        for (int j = v2.size(); j >= 0; --j)
        {
            if (v1[i+1] == v2[j+1])
                dp[i][j] = dp[i+1][j+1] + 1;
            else
                dp[i][j] = max(dp[i][j+1],dp[i+1][j]);
            
        }
    }
    return dp[0][0];
}


int main()
{
    string s1,s2;

    while (getline(cin,s1))
    {
        v1.clear();
        v2.clear();
        if(s1!="#"){
            istringstream is(s1);
            while(is>>s2) v1.push_back(s2);
            
            while(getline(cin,s1)){
                if(s1=="#") break;
                istringstream is(s1);
                while(is>>s2) v1.push_back(s2);
            }
        }
        
        while(getline(cin,s1)){
            if(s1=="#") break;
            istringstream is(s1);
            
            while(is>>s2) v2.push_back(s2);
        }
        
        s1 = "";
        memset(dp,0,sizeof(dp));
        ll mx = lcs();
        for (int i = 0; i <= v1.size()-1; ++i)
        {
            for (int j = 0; j <= v2.size()-1; ++j)
            {
                if (v1[i]==v2[j] && mx == dp[i][j])
                {
                    mx--;
                    s1 += v1[i];
                    if (mx!=-1) s1 += " ";
                }
            }
        }
        
        cout<<s1<<endl;
    }
    return 0;
}