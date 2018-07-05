#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int l1, l2, cnt=0;

    while(cin >> l1 >> l2)
    {   
        if(l1 == 0 && l2 == 0)
            break;

        cnt++;
        int a1[200], a2[200];

        for(int i=1; i<=l1;++i)
        {
            cin >> a1[i];
        }
        for(int i=1; i<=l2;++i)
        {
            cin >> a2[i];
        }
        
        int lcs[200][200];

        for(int i=0; i<=l1; ++i)
        {
            lcs[i][0] = 0;
        }
        for(int j=0; j<=l2; ++j)
        {
            lcs[0][j] = 0;
        }

        for(int i=1; i<=l1; ++i)
        {
            for(int j=1; j<=l2; ++j)
            {
                if(a1[i] == a2[j])
                {
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                }
                else
                {
                    lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
        }

        cout << "Twin Towers #" << cnt << endl;
        cout << "Number of Tiles : " << lcs[l1][l2] << endl;
    }


    return 0;
}