#include <iostream>
#include <cstdio>

using namespace std;

int main()
{

    int a;


    while(cin >> a && a>0)
    {
        for(int i=0; i<a; ++i)
        {
            int day, part, har[101], fin=0, ans[3700]={0};

            cin >> day >> part;

            for(int j=0; j<part; ++j) // each party har days
                cin >> har[j];

            for(int j=0; j<part; ++j)
            {
                for(int k=har[j]; k<=day; k+= har[j])
                {
                    if(ans[k] == 0 && (k-1)%7 < 5) // no rehar, -1 %5->Fri. %6->Sat.
                    {
                        ++fin; // answer ++
                        ans[k] = 1; // mark had har
                    }
                }
            }
            cout << fin << endl;
        }
    }
    return 0;
}