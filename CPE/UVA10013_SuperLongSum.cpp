#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;
    int bl = 0;
    while(cin >> a && a>0)
    {
        int b;
        for(int j=0; j<a; ++j) // cases
        {   
            scanf("%d", &b); // digit number

            int c, d, ans[1234567]={0};

            for(int i=b-1; i>=0; --i)
            { // sum of number separately
                scanf("%d%d", &c, &d);
                ans[i] = c+d;
            }

            for(int i=0; i<b; ++i)
            {
                ans[i+1] += ans[i] / 10;
                ans[i] %= 10;
            } // check each sum for carry

            if(ans[b] == 1) // ans to b-1 index
                ++b; // the last one carry
            if(bl == 1)
                cout << endl;
            bl = 1;

            for(int i=b-1; i>=0; --i)
            {
                printf("%d", ans[i]);
            }
            cout << endl; // each case has blank 
        }

    }

    return 0;
}