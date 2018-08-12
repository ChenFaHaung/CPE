#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    char c;
    string str = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

    while(c = getchar())
    {
        if (c== EOF ) break;
        int i=0;
        //cout << c;
        if(c == ' ' || c == '\n')
        {
            printf("%c",c);
            //cout<<"123\n";
        }
        else
        {
            while(str[i] != c)
            {
                ++i;
            }       

            printf("%c",str[i-1]);     
        }
        
    }
    
    return 0;
}