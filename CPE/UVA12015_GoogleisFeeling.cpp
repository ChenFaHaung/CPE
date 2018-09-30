#include <iostream>
#include <cstdio>
#include <map>
#include <string>

using namespace std;

int main()
{
    int a;
    while(cin >> a)
    {
        for(int i=0; i<a; ++i)
        {
            int m = i+1;
            string str[10];
            int b[10], Max = 0;

            for(int j=0; j<10; ++j)
            {
                cin >> str[j] >> b[j];
                if(b[j] > Max)
                    Max = b[j]; // find the max
            }
            cout << "Case #" << m++ << ":\n";
            for(int j=0; j<10; ++j)
            {
                if(b[j] == Max) // print the max number string
                    cout << str[j] << endl;
            }
        }
    }
    return 0;
}