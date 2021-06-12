#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b; cin>>a;
    vector<long long> A(a);
    for (int i = 0; i<a; ++i) cin>>A[i];
    cin>>b;
    vector<long long> B(b);
    for (int i = 0; i<b; ++i) cin>>B[i];
    int i = 0, j = 0, tot = 0;
    while (i < a && j < b)
    {
        if (A[i] == B[j])
            tot++,i++,j++;
        else if (i+1<a && A[i] < B[j])
            {A[i+1] += A[i]; i++;}
        else if (j+1<b && B[j] < A[i])
            {B[j+1] += B[j]; j++;}
        else
            i++, j++;
    }
    if (B[j-1] != A[i-1] || i != a || j != b)
        cout<<-1;
    else
        cout<<tot;
    return 0;
}