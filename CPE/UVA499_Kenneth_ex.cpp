#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(void)
{

    int ans_num ;
    char inc, outc;
    int cont_a[128] = {0};

    while(scanf("%c", &inc) != EOF)
    {
        if(inc != '\n')
        {
            cont_a[inc]++;
        }
        else
        {
            ans_num = 0; // each round ans_num is different

            for(outc = 'A'; outc<='Z'; outc++)
            {
                if(cont_a[outc] > ans_num)
                {
                    ans_num = cont_a[outc];
                }
            }
            for(outc = 'a'; outc<='z'; outc++)
            {
                if(cont_a[outc] > ans_num)
                {
                    ans_num = cont_a[outc];
                }
            }
            for(outc = 'A'; outc<='Z'; outc++)
            {
                if(cont_a[outc] == ans_num)
                {
                    cout << outc;
                }
            }
            for(outc = 'a'; outc<='z'; outc++)
            {
                if(cont_a[outc] == ans_num)
                {
                    cout << outc;
                }
            }
            cout << " " << ans_num << endl;
            memset(cont_a, 0, sizeof(cont_a));
        }

    }

    return 0;
}
