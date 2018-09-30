#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    long long int s, d;

    while(cin >> s >> d && s)
    {
        while(d > s) // some people add to days
        {
            d -= s; // day decrease 
            s++; // people increase from s
        }
        
        cout << s << endl;
    }

    return 0;
}