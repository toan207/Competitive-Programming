#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    for (int _ = 1; _<=t; ++_)
    {
        char matrix[50][50];
        int f[50][50];
        int r,c,check=0; cin>>r>>c;
        for (int i = 0; i<r; ++i)
            for (int j = 0; j<c; ++j)
            {
                cin>>matrix[i][j];
                f[i][j] = 0;
            }
        for (int i = 0; i<r; ++i)
        {
            for (int j = 0; j<c; ++j)
            {
                if (matrix[i][j] == '#' && f[i][j] == 0)
                {
                    f[i][j] = 1;
                    if (i == r-1 || j == c-1 || matrix[i][j+1] == '.' || matrix[i+1][j] == '.' || matrix[i+1][j+1] == '.' || f[i][j+1] != 0 || f[i+1][j] != 0 || f[i+1][j+1] != 0)
                    {
                        check = 1;
                        break;
                    }
                    f[i][j] == 1, f[i][j+1] = 2, f[i+1][j] = 3, f[i+1][j+1] = 4;
                }
            }
            if (check)
                break;
        }
        cout<<"Case #"<<_<<":"<<endl;
        if (check)
            cout<<"Impossible"<<endl;
        else
        {
            for (int i = 0; i<r; ++i)
            {
                for (int j = 0; j<c; ++j)
                {
                    if(f[i][j] == 0)
                        cout<<".";
                    else if (f[i][j] == 1 || f[i][j] == 4)
                        cout<<"/";
                    else if (f[i][j] == 2 || f[i][j] == 3)
                        cout<<"\\";
                }
                cout<<endl;
            }
        }
        
    }
    return 0;
}