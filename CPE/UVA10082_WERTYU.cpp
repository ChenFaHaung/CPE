#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    char c;
    string str = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    while(c = getchar()) // char analysis
    {
        if (c == EOF ) break;
        int i=0;
        //cout << c;
        if(c == ' ' || c == '\n') // space and line space
        {
            printf("%c",c);
        }
        else
        {
            while(str[i] != c) // scan the str until matching c
            {
                ++i;
            }       

            printf("%c",str[i-1]); // print the one before str
        }
        
    }
    
    return 0;
}