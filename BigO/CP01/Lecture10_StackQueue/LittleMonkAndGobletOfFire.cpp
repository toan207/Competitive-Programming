#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q,x,y;
    char c;
    vector<queue<pair<int,int> > > vq;
    queue<pair<int,int> >q;
    cin >> Q;
 
    while(Q--)
    {
        cin >> c;
        if(c=='D')
        {
            cout << vq[0].front().first<<" "<<vq[0].front().second << endl;
            vq[0].pop();
            if(vq[0].empty())
                vq.erase(vq.begin());
        }
        else
        {
            cin >> x >> y;
            int idx=0;
            while(idx<vq.size() && vq[idx].front().first!=x)
                idx++;
            if(idx==vq.size())
            {
                q.push(make_pair(x,y));
                vq.push_back(q);
                q.pop();
            }
            else
                vq[idx].push(make_pair(x,y));
        }
    }
    return 0;
}