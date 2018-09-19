#include <iostream>
#include <cstdio>
#include <string>

using namespace std;
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a%b);
}
int main()
{
    /*int a;

    while(cin >> a)
    {
        int tmp;
        int b[16] = {0};
        for(int i=0; i<a; ++i)
        {
            for(int j=0; j<4; ++j)
            {
                cin >> tmp;
                //cout << tmp;
                b[j*4+3] = tmp % 10;
                tmp /= 10;
                b[j*4+2] = tmp % 10;
                tmp /= 10;
                b[j*4+1] = tmp % 10;
                tmp /= 10;
                b[j*4] = tmp % 10;
            }
            
            int c = 0, d = 0;
            for(int k=0; k<16; k+=2)
            {
                c = b[k] * 2;
                d += c % 10;
                c /= 10;
                d += c % 10;
            }

            for(int k=1; k<16; k+=2)
            {
                d += b[k];
            }

            if(d % 10)
                cout << "Invalid\n";
            else 
                cout << "Valid\n";
        }
    }*/

    int a,b;
     while(scanf("%d %d", &a, &b) == 2)
     {
         cout << gcd(a,b) << endl;
     }

    return 0;
}