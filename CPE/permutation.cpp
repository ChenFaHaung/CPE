#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

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
        {
            num.push_back(ind);
            if(blank == '\n')
            {
                break;
            }
        }
        //cout<< "Num size: " << num.size() <<endl;
        for(int i = 0; i < num.size(); i++)
        {
            cin >> nump;
            data.push_back(nump);
        }
        //cout<< "Data size: " << data.size() <<endl;
        for(int i=0; i<num.size(); i++)
        {
            for(int j=0; j<num.size(); j++)
            {
                if((i+1) == num[j])
                {
                    cout << data[j] << endl;
                }
            }
        }
        inp--;
        if(inp!=0)
        {
            cout << endl;
        }

    }

    return 0;
}
