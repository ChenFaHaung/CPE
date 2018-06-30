#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,k,m;

    while(cin >> n >> k >> m)
    {
        if(n<1 || m<1 || k<1 || n>50 || m>50 || k>50)
        {
            break;
        }

        long long int BC[60][60] = {0};

        BC[0][0] = 1;

        for(int i=1; i<=n; ++i){
            for(int j=1; j<=k; ++j){
                for(int p=1; p<=m && p<=i; ++p){
                    BC[i][j] += BC[i-p][j-1];
                }
            }
        }

        cout << BC[n][k] << endl;
    }

    return 0;
}