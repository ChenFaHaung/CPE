#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int a, b;
    while(scanf("%lld%lld", &a, &b) != EOF)
    {
        long long int ans = 0;
        if(a > b)
        {
            ans = a - b;
        }
        else
        {
            ans = b - a;
        }
        cout << ans << endl;
    }
    return 0;
}