#include <bits/stdc++.h>
using namespace std;

int MAX = 1e5 + 1;

int main()
{
    vector<int> isPrime(MAX + 5, 1);
    vector<int> prime;
    for (int i = 2; i<sqrt(MAX) + 1; i++)
        if (isPrime[i])
            for (int j = i*i; j<MAX + 1; j += i)
                isPrime[j] = 0;
    int maPri = 0;
    string s; cin>>s;
    for (int i = 0; i<s.size(); i++)
    {
        int j = i, tempInt = 0;
        while(j < s.size() && s[j] >= '0' && s[j] <= '9' && j - i <= 4)
        {
            tempInt = tempInt*10 + (s[j] - '0');
            maPri = max(tempInt * isPrime[tempInt], maPri);
            j++;
        }
    }
    cout<<maPri<<endl;
    return 0;
}