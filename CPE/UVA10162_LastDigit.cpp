#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int rule[20] = {0, 1, 5, 2, 8, 3, 9, 2, 8, 7,
                7, 8, 4, 7, 3, 8, 4, 1, 5, 4};

int main()
{
    string str;

    while(cin >> str)
    {
        int len = str.length();
        if(str[0] == '0' && len == 1)
            break;

        int term = str[len - 1] - '0';
        if(len > 1) // see the last two digits
            term += (str[len - 2] - '0') * 10;
            
        cout << (rule[term%20] + term/20*4) % 10 << endl; // every 20, and each line add 4, get last digit
    }
    return 0;
}