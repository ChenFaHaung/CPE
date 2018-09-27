#include <iostream>
#include <cstdio>
#include <stack>
#include <string>

using namespace std;

int main()
{
    //string a = "I am a boy";
    stack<string> b;
    string tmp = "";
    char c;
    int cnt = 0;
    while(c = getchar())
    {
        if(c != '\n')
        {
            if(c != ' ')
                tmp += c;
            else
            {
                b.push(tmp);
                tmp = "";
            }
        }        
        else
        {
            b.push(tmp);
            break;   
        }
            
    }
    int size = b.size();
    for(int i=0; i<size; ++i)
    {
        cout << b.top() << " ";
        b.pop();
    }

    cout << endl;

    return 0;
}