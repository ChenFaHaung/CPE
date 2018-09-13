#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a;

    while(cin >> a && a)
    {
        int bottle = 0, total = 0, tmp = 0;
        
        while(a + bottle > 2)
        {
            total += a;
            bottle += a;
            a = bottle/3;
            bottle %= 3;
        }

        total += a;

        if(a+bottle == 2)
            ++total;

        cout << total << endl;
    }
    return 0;
}