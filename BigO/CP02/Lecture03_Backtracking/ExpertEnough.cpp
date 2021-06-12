#include <bits/stdc++.h>
using namespace std;
vector< pair<string, pair<int,int>>> cars;
void backtracking(int s, int n, int count, string car, int price)
{
    if (count != 1 && s == n)
    {
        cout<<"UNDETERMINED"<<endl;
        return;
    }
    if (s == n && count)
    {
        cout<<car<<endl;
        return;
    }
    if (cars[s].second.first <= price && cars[s].second.second >= price)
    {
        car = cars[s].first;
        count++;
        if (count == 2)
        {
            cout<<"UNDETERMINED"<<endl;
            return;
        }
    }
    backtracking(s + 1, n, count, car, price);
}

int main()
{
    int T; cin>>T;
    while (T--)
    {
        int D,Q; cin>>D;
        cars.clear();
        for (int i = 0; i<D; ++i)
        {
            string name;
            int l,h;
            cin>>name>>l>>h;
            cars.push_back({name,{l,h}});
        }
        cin>>Q;
        for (int i =0; i<Q; ++i)
        {
            int price; cin>>price;
            backtracking(0,D,0,"",price);
        }
    }
    return 0;
}