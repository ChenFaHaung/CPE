#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    string str;

    while(getline(cin, str))
    {
        int cnt = 0;
        int flag = 0;
        for(int i=0; i<str.length(); ++i)
        {
            if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
            {
                flag = 1;
            }
            else
            {
                cnt += flag;
                flag = 0;
            }
        }
        cnt += flag;

        cout << cnt << endl;
    }



    return 0;
}
