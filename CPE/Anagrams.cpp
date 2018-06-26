#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{

    int t, i;
    int num = 0;
    char word[1010][30], temp[1010][30], test[30], temp2[30];

    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &i);
        for(int j=0; j<i; j++)
        {
            scanf("%s", &word[j]);
            strcpy(temp[j], word[j]);
            sort(&temp[j][0], &temp[j][0]+strlen(temp[j]));
        }

        while(scanf("%s", &test) && test[0] != 'E')
        {
            cout << "Anagrams for: " << test << endl;
            strcpy(temp2,test);
            sort(&temp2[0], &temp2[0]+strlen(temp2));
            num = 0;
            for(int j=0; j<i; j++)
            {
                if(strcmp(temp[j],temp2) == 0)
                {
                    num++;
                    cout << num << ") " << word[j] << endl;
                }
            }
            if(num == 0)
            {
                cout << "No anagrams for: " << test << endl;
            }

        }
        if(t)
        {
            cout << "\n";
        }
    }

    return 0;
}
