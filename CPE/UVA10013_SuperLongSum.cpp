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
        for(int j=0; j<a; ++j)
        {   
            scanf("%d", &b);

            int c, d, ans[1234567]={0};

            for(int i=b-1; i>=0; --i)
            {
                scanf("%d%d", &c, &d);
                ans[i] = c+d;
                //ans[i+1] += ans[i] / 10;
                //ans[i] %= 10;
            }

            //ans[b] = 0;
            for(int i=0; i<b; ++i)
            {
                ans[i+1] += ans[i] / 10;
                ans[i] %= 10;
            }

            if(ans[b] == 1)
                ++b;
            if(bl == 1)
                cout << endl;
            bl = 1;

            for(int i=b-1; i>=0; --i)
            {
                printf("%d", ans[i]);
            }
            cout << endl;    
        }

    }

    return 0;
}