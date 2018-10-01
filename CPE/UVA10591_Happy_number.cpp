#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main()
{
    int testcase, input, ans, sum, i;

    scanf("%d", &testcase);

    for(i=0; i<testcase; i++)
    {
        scanf("%d", &input);
        sum = 0;
        ans = input;
        while(ans != 0) // sum of each digit(square)
        {
            sum = sum + (ans % 10) * (ans % 10);
            ans = ans / 10;
        }
        ans = sum;

        int check[1000] = {0};

        check[1] = 1;

        while(check[ans] != 1)
        {
            check[ans] = 1;
            sum = 0;
            while(ans != 0)
            {
                sum = sum + (ans % 10) * (ans % 10);
                ans = ans / 10;
            }
            ans = sum;
        }

        if(ans == 1)
            printf("Case #%d: %d is a Happy number.\n", (i+1), input);
        else
            printf("Case #%d: %d is an Unhappy number.\n", (i+1), input);
    }

    return 0;
}
