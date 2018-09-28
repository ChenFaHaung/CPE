#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char str[101][101];
    memset(str, 0, sizeof(str));

    int maxlen = 0, cnt;
    for(cnt = 0; gets(str[cnt])!=NULL; cnt++) // gets NULL max length
    {
        if(maxlen < strlen(str[cnt]))
            maxlen = strlen(str[cnt]);
    }
    
    for(int i=0; i<maxlen; ++i)
    {
        for(int j=cnt-1; j>=0; --j)
        {
            if(str[j][i])
                cout << str[j][i];
            else // not emough need to add " "
            {
                if(i != 0)
                    cout << " ";
            }
        }
        cout << endl;
    }
	
    return 0;
}