#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

#define LEN 100001

int main()
{
    char s[LEN];
    char p[LEN];

    while(gets(s)) // KMP
    {
        int fail[LEN] = {-1}, len = strlen(s),i,j;
        reverse_copy(s,s+len, p);

        for(i=1, j=-1; i<len; ++i)
        {
            while(j >=0 && p[j+1] != p[i])
                j = fail[j];
            if(p[j+1] == p[i])
                ++j;
            fail[i] = j;
        }

        for(i=0, j=-1; i<len; ++i)
        {
            while(j>=0 && p[j+1] != s[i])
                j = fail[j];
            if(p[j+1] == s[i])
                ++j;
        }

        for(i=0; i<len; ++i)
            putchar(s[i]);
        for(++j; j<len; ++j)
            putchar(p[j]);
        putchar('\n');
    }

    return 0;
}