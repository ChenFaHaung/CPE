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
        for(int i=0; i<a; ++i)
        {
            cin >> con[i];
            getline(cin, nsme);
        }

        sort(con, con+a);

        for(int i=0; i<a; ++i)
        {
            cout << con[i];
            int cnt = 0;
            int j;
            for(j=i; j<a; ++j)
            {
                if(con[i] != con[j])
                {
                    break;
                }
                ++cnt;
            }
            cout << " " << cnt << endl;
            i = j-1;
        }
        
    }

    return 0;
}