#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char a[11];

    while(scanf("%s", a) != EOF && a[0] != '0')
    {
        while(strlen(a) != 1)
        {
            int sum = 0;
            for(int i=0; i<strlen(a); ++i)
            {
                sum += a[i] - '0';
            }
            memset(a, '\0', 11);
            sprintf(a, "%d", sum);
        }
        cout << a << endl;
    }
    return 0;
}