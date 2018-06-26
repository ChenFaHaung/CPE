#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool isprime(int a)
{
    if(a == 2 || a == 3 || a == 5 || a == 7)
    {
        return true;
    }
    for(int i=2; i<=sqrt(a); ++i)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int in;

    while(scanf("%d", &in) != EOF && in != 0)
    {
        if(in < 4 || in%2==1)
        {
            break;
        }

        int cnt = 0;
        int tmp = 0;

        for(int i=2; i<=in/2; i++)
        {
            tmp = in - i;

            if(isprime(i) && isprime(tmp))
            {
                ++cnt;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}