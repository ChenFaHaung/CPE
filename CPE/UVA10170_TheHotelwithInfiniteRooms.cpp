#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    long long int s, d;

    while(cin >> s >> d && s)
    {
        //int tmp = 0;
        while(d > s)
        {
            d -= s;
            s++;
        }
        
        cout << s << endl;
    }

    return 0;
}