#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int a;
    string con[2010];
    
    while(scanf("%d", &a) != EOF)
    {
        string nsme;
        for(int i=0; i<a; ++i) // only store the country
        {
            cin >> con[i];
            getline(cin, nsme); // getline the name
        }

        sort(con, con+a); // sort the country

        for(int i=0; i<a; ++i)
        {
            cout << con[i];
            int cnt = 0;
            int j;
            for(j=i; j<a; ++j)
            {
                if(con[i] != con[j]) // if change country
                    break;
                ++cnt; // same country counter
            }
            cout << " " << cnt << endl;
            i = j-1; // remember to move the index
        }
    }
    return 0;
}