#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{

    int lc,rc,he,counter;
    int out[10001];

    for(int i=0; i<10000; i++)
    {
        out[i] = 0;
    }

    while(cin >> lc >> he >> rc)
    {
        for(int i=lc; i<rc; i++)
        {
            if(out[i] < he)
            {
                out[i] = he;
            }
        }

       /* if(lc == 0 && he == 0 && rc ==0)
        {
            break;
        }*/
    }

    for(int i=1; i<5000; i++)
    {
        if(out[i] != 0)
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
        }
    }

    return 0;
}
