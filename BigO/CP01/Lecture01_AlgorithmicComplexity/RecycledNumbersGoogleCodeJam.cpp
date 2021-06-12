#include <iostream>
using namespace std;

int main()
{
    int t; cin>>t;
    for (int i=1; i<=t;++i)
    {
        int A,B; cin>>A>>B;
        int power = 1, temp = A;
        cout<<"Case #"<<i<<": ";
        while (temp >= 10) {
            power *= 10;
            temp /= 10;
        }
        int result = 0;
        for (int n = A; n <= B; ++n) {
            temp = n;
            while (true) {
                temp = (temp / 10) + ((temp % 10) * power);
                if (temp == n)//
                    break;
                if (temp > n && temp <= B)
                    result++;
            }
        }
        cout<<result<<endl;
    }
}