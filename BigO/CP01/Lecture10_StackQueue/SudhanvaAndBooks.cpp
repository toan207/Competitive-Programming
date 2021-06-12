#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q; cin>>Q;
    stack<long long> job;
    while (Q--)
    {
        int opt; cin>>opt;
        if (opt == 1)
        {
            long long N; cin>>N;
            job.push(N);
        }
        else
        {
            if (job.empty())
                cout<<"kuchbhi?"<<endl;
            else
            {
                cout<<job.top()<<endl;
                job.pop();
            }
        }
    }
    return 0;
}