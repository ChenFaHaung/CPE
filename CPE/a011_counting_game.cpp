#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    string str;

    while(getline(cin, str)) // each line
    {
        int cnt = 0;
        int flag = 0;
        for(int i=0; i<str.length(); ++i)
        {
            if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            {
                flag = 1;
            }
            else // " ", "\n", "\t"... will be the end of a word
            {
                cnt += flag; // cnt for flag
                flag = 0;
            }
        }
        cnt += flag; // may be only a word

        cout << cnt << endl;
    }

    return 0;
}
