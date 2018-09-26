#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;


int main()
{
    int a, a1, a2, a3, a4;

    while(cin >> a)
    {
        for(int i=0; i<a; ++i)
        {
            cin >> a1 >> a2 >> a3 >> a4;
            if((a2 - a1) == (a3 - a2) && (a3 - a2) == (a4 - a3)) // same difference
                cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a1+4*(a2-a1) << endl;
            else // same multiple
                cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a1*pow((a2/a1), 4) << endl;
            
        }
    }

    return 0;
}