#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;

    while(cin >> a && a > 0)
    {
        for(int i=0; i<a; ++i)
        {
            int s,d, a_s, a_d;
            cin >> s >> d;
            if((s+d)/2<0 || (s-d)/2<0 || (s-d)%2 != 0 || (s+d)%2 != 0)
            {
                cout << "impossible" << endl;
            }
            else
            {
                a_s = (s+d)/2;
                a_d = (s-d)/2;

                cout << a_s << " " << a_d << endl;
            }
        }
    }

    return 0;
}