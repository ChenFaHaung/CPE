#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    string str;

    while(cin >> str)
    {
        int num, sum = 0, maxN = -1, ans = 0;
        for(int i=0; i<str.length(); ++i)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
                num = str[i] - 'A' + 10;
            else if(str[i] >= 'a' && str[i] <= 'z')
                num = str[i] - 'a' + 36;
            else if(str[i] >= '0' && str[i] <='9')
                num = str[i] - '0';
            else 
                continue;

            if(num > maxN)
                maxN = num;
            sum += num;
        }

        if(!maxN)
            maxN = 1;
        
        for(int i=maxN; i<62; ++i)
        {
            if(sum%i == 0)
            {
                ans = i + 1;
                break;
            }
        }

        if(ans == 0)
            cout << "such number is impossible!\n";
        else 
            cout << ans << endl;
    }
    return 0;
}