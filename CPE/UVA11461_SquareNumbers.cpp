#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    while(cin >> a >> b)
    {
        int c = 0;
        double d, e;
        if(a == 0 && b == 0)
        {
            break;
        }
        if(a > b)
        {
            swap(a, b);
        }
        d = sqrt(a); // lower bound
        e = sqrt(b); // upper bound
        // lower for ceil, upper for floor
        cout << floor(e) - ceil(d) + 1 << endl;
    }
}