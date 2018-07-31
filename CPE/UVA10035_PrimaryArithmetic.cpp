#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    long int a, b;

    while(cin >> a >> b)
    {
        if(a == 0 && b == 0)
        {
            break;
        }

        int cnt=0, of=0;
        while(a!=0 || b!=0)
        {
            if(a%10 + b%10 + of >= 10)
            {
                ++cnt;
                of = 1;
            }
            else   
                of = 0;
            a /= 10;
            b /= 10;
        }

        if(cnt == 0)
        {
            cout << "No carry operation." << endl;
        }
        else if(cnt == 1)
        {
            cout << "1 carry operation." << endl;
        }
        else
        {
            cout << cnt << " carry operations." << endl;
        }
    }
    return 0;
}