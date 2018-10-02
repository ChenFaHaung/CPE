#include <iostream>
#include <cstdio>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string str;
    stack<string> str1;
    int cnt = 0;
    while(getline(cin, str) != NULL)
    {
        if(str == "0"){break;}
        for(int i=str.length()-1; i>=0; --i)
            cout << str[i];
        str1.push(str);
        cnt++;
        cout << endl;
    }
    for(int i=0; i<cnt; ++i)
    {
        cout << str1.top();
        str1.pop();
    }
    cout << endl;
    return 0;
}