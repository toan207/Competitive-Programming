#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        vector<string> v;
        vector<string>::iterator it;
        int N; cin>>N;
        while(N--)
        {
            string s; cin>>s;
            if (s=="pwd")
            {
                for (int i = 0; i < v.size(); ++i)
                    cout<<"/"<<v[i];
                cout<<"/\n";
            }
            else
            {
                string p; cin>>p;
                if (p[0] == '/')
                {
                    v.clear();
                    p = p.substr(1,p.size());
                }
                string temp = "";
                for (int i = 0; i<p.size(); ++i)
                {
                    if (p[i] != '/')
                        temp += p[i];
                    else
                    {
                        if (temp == "..")
                        {
                            it = v.end();
                            v.erase(it);
                        }
                        else
                            v.push_back(temp);
                        temp = "";
                    }
                }
                if (temp == "..")
                {
                    it = v.end();
                    v.erase(it);
                }
                else
                    v.push_back(temp);
            }
        }
    }
    return 0;
}