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
            total += a; // to total
            bottle += a; // next will be bottle
            a = bottle/3; // return Cola
            bottle %= 3; // remain bottle
        }

        total += a; // the last one 

        if(a+bottle == 2) // can borrow a bottle when it is exactly two bottles
            ++total;

        cout << total << endl;
    }
    return 0;
}