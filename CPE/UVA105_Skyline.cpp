#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{

    int lc,rc,he,counter = 0;
    int out[10001];

    for(int i=0; i<10000; i++)
    {
        out[i] = 0;
    }

    //while(cin >> lc >> he >> rc)
    while(~scanf("%d%d%d", &lc, &he, &rc))
    {
        for(int i=lc; i<rc; i++)
        {
            if(out[i] < he)
            {
                out[i] = he; // set the each height
            }
        }
        if(rc > counter)
            counter = rc; // highest one
    }

    for(int i=1; i<counter; i++) // 1 to heightest
    {
        if(out[i] != out[i-1])
            cout << i << " " << out[i-1] << " ";
        cout << counter << " 0" << endl;
        /*if(out[i] != 0)
        {
            if(out[i] != out[i-1])
            {
                cout << i << " " << out[i] << " ";
            }
        }
        else
        {
            if(out[i-1] !=0)
            {
                cout  << i << " " << "0 ";
            }
        }*/
    }

    return 0;
}
