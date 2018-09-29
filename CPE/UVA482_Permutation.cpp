#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

vector<int> num;

int main(void)
{

    int inp;

    cin >> inp;

    while(inp != 0)
    {
        num.clear();
        vector<string> data;
        int ind;
        char blank;
        string nump;
        
        while(scanf("%d%c", &ind, &blank) == 2)
        { // the permutation input
            num.push_back(ind); // get int separate
            if(blank == '\n')
            {
                break;
            }
        }
        for(int i = 0; i < num.size(); i++)
        {
            cin >> nump; // the data input as string
            data.push_back(nump);
        }

        for(int i=0; i<num.size(); i++)
        {
            for(int j=0; j<num.size(); j++)
            {
                if((i+1) == num[j]) // i for the print order
                { // j for search the data
                    cout << data[j] << endl;
                }
            }
        }

        inp--; // for case
        if(inp!=0) // each case sperated by a blank line
        {
            cout << endl;
        }
    }
    return 0;
}
