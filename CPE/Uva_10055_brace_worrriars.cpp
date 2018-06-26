#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int start, end;

    while(scanf("%d %d", &start , &end) && start != EOF)
    {
        if(start > end)
        {
            swap(start, end);
        }

        printf("%d\n", end - start);
    }

    return 0;
}