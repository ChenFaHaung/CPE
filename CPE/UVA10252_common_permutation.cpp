#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char inp[1001];
    char inp1[1001];

    while(gets(inp) != NULL && gets(inp1) != NULL)
    {
        sort(inp, inp + strlen(inp));
        sort(inp1, inp1 + strlen(inp1));

        for(int i=0 , j=0; i< strlen(inp) && j<strlen(inp1);)
        {
            if(inp[i] == inp1[j])
            {
                printf("%c", inp[i]);
                i++; j++;
            }
            else if(inp[i] > inp1[j])
                j++;
            else
                i++;
        }
        cout << endl;
    }

    return 0;
}
