// https://leetcode.com/problems/trapping-rain-water/

#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        if (n==0)
            return 0;
        int i = 0, j = n - 1, markp = a[0], marks = a[n-1], ans = 0;
        vector<pii> pre, suf;
        pre.push_back({markp, i});
        for (int x = 0; x < n; ++x)
        {
            if (markp < a[x])
            {
                i = x;
                markp = a[x];
                pre.push_back({markp, i});
            }
        }
        if (i != n - 1)
        {
            suf.push_back({marks, j});
            for (int x = n - 1; x > i; --x)
            {
                if (marks < a[x])
                {
                    j = x;
                    marks = a[x];
                    suf.push_back({marks, j});
                }
            }
            suf.push_back({markp, i});
        }
        int t = 1, mark = 0;
        // for (int x = 0; x < pre.size(); ++x)
        //     cout<<pre[x].first<<" "<<pre[x].second<<endl;
        for (int x = 1; x <= pre[pre.size() - 1].second; ++x)
        {
            if (x == pre[t].second)
            {
                ans += pre[t-1].first * (pre[t].second - pre[t-1].second - 1) - mark;
                // cout<<pre[t-1].first<<" "<<pre[t].second<<" "<<pre[t-1].second<<" "<<mark<<" "<<ans<<endl;
                mark = 0;
                t++;
                continue;
            }
            mark += a[x];
        }
        if (!suf.empty())
        {
            t = suf.size() - 2;
            mark = 0;
            for (int x = suf[suf.size() - 1].second + 1; x < n; ++x)
            {
                if (x == suf[t].second)
                {
                    ans += min(suf[t].first, suf[t+1].first) * (suf[t].second - suf[t+1].second - 1) - mark;
                    //cout<<suf[t].first<<" "<<suf[t].second<<" "<<suf[t+1].second<<" "<<mark<<" "<<ans<<endl;
                    mark = 0;
                    t--;
                    continue;
                }
                mark += a[x];
            }
        }
        return ans;
    }
};