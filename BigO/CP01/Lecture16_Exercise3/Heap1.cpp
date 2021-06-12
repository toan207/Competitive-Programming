#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T; cin>>T;
    while (T--)
    {
        priority_queue <int, vector<int>, greater<int> > heap;
        int N; cin>>N;
        long long sum = 0;
        while (N--)
        {
            int num; cin>>num;
            heap.push(num);
        }
        while (heap.size() > 1)
        {
            int a = heap.top();
            heap.pop();
            int b = heap.top();
            heap.pop();
            sum += a + b;
            heap.push(a+b);
        }
        cout<<sum<<endl;
    }
    return 0;
}