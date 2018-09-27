#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a[100][100] = {0};
    int b[100][100] = {0};
    int d[100][100] = {0};
    int c;

    while(cin >> c && c)
    {
        for(int i=0; i<c; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                cin >> a[i][j];
            }
        }
        for(int i=0; i<c; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                cin >> b[i][j];
            }
        }

        for(int i=0; i<c; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                for(int k=0; k<c; ++k)
                {
                    d[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for(int i=0; i<c; ++i)
        {
            for(int j=0; j<c; ++j)
            {
                cout << d[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}