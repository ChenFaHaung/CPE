#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    while(cin >> a)
    {
        //cout << a;
        for(int i=0; i<a; ++i)
        {
            int b, c[502];
            cin >> b;

            if(b<0 || b>500){break;}

            for(int j=0; j<b; ++j)
            {
                cin >> c[j];;
            }

            sort(c, c+b);

            int d=0, be = 0;
            be = c[(int)b/2];

            for(int j=0; j<b; ++j)
            {
                d += abs(c[j] - be);
            }

            cout << d << endl;
        }

    }
    
    return 0;
}