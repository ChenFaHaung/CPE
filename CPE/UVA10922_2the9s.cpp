#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main()
{
    char in[1001];

    while(scanf("%s", in) == 1)
    {
        int a = strlen(in);
        int add = 0;

        if(in[0] == '0' && a == 1)
            break;
        
        for(int i=0; i<a; ++i)
        {
            add += (in[i] - '0');
            cout << in[i];
        }
        //cout << add << endl;
        if(add % 9 == 0) // cal. the degree of 9
        {
            int degree = 1;
            while(add >= 10) { 
                sprintf(in, "%d", add); // copy the 10-over add to string in
                add = 0; // add set to 0 for in cal.
                for(int i = 0; in[i]; i++)
                    add += in[i]-'0';
                degree++; // 
            }
            cout << " is a multiple of 9 and has 9-degree " << degree << "." << endl;
        }
        else
        {
            cout << " is not a multiple of 9." << endl;
        }

    }


    return 0;
}