#include <iostream>
using namespace std;

int main()
{
    int N; cin>>N;
    int hangNghin, hangTram, hangChuc, hangDonVi;
    hangDonVi = N%10;
    N = N/10;
    hangChuc = N%10;
    N = N/10;
    hangTram = N%10;
    N = N/10;
    hangNghin = N%10;
    N = N/10;

    if (hangNghin == hangDonVi && hangTram == hangChuc)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}