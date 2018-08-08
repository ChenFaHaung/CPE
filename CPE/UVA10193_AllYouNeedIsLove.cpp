#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    if(b>a)
    {
        return gcd(b, a);
    }

    if(b == 0)
    {
        return a;
    }
    else 
    {
        return gcd(b, a%b);
    }
}

int main()
{
    int a;
    //char s1[32], s2[32];
    string s1, s2;
    while(cin >> a && a > 0)
    {
        for(int j=1; j<=a; ++j)
        {
            
            int sc, sd, m=0, n=0;

            cin >> s1 >> s2;

            sc = s1.length();
            sd = s2.length();

            m = s1[0] - '0';

            for(int i=1; i<sc; ++i)
            {
                m *= 2;
                m += s1[i] - '0';
            }
            n = s2[0] - '0';

            for(int i=1; i<sd; ++i)
            {
                n *= 2;
                n += s2[i] - '0';
            }

            if(gcd(m, n)!=1)
            {
                cout << "Pair #" << j << ": All you need is love!" << endl;
            }
            else 
            {
                cout << "Pair #" << j << ": Love is not all you need!" << endl;
            }
        }
    }
    return 0;
}