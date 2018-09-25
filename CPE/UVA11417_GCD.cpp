#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int gcd(int n, int m)
{
    /*if(m == 0)
    {
        return n;
    }
    return gcd(m, n%m);*/

    return m == 0 ? n : gcd(m, n%m);
}

int main()
{
    int n, total;

    while(cin >> n && n !=0)
    {
        total = 0;
        for(int i=1; i<n; ++i)
        {
            for(int j=i+1; j<=n; ++j)
            {
                total += gcd(i, j);
            }
        }

        cout << total << endl;
    }    
    
    return 0;
}