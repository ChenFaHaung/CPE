#include <iostream>
#include <cstdio>
#include <string.h>

using namespace std;

int main(void)
{

    int N, L;
    char irreg[20][2][20], word[20];

    cin >> N >> L;
    for(int i=0; i<N; i++)
        cin >> irreg[i][0] >> irreg[i][1]; // dictionary

    int isIrreg = 0;

    for(int i=0; i<L; i++)
    {
        isIrreg = 0;
        cin >> word;
        for(int j=0; j<L; j++)
        {
            if(!strcmp(word, irreg[j][0])) // non rule
            {
                cout << irreg[j][1] << endl;
                isIrreg = 1;
                break;
            }
        }

        if(isIrreg == 1)
            continue;

        int length = strlen(word);
        char output[20] = "";

        if(word[length-1] == 'y' && (word[length-2] != 'a' && word[length-2] != 'e' && word[length-2] != 'i' && word[length-2] != 'o' && word[length-2] != 'u'))
        {
            strncpy(output, word, length-1); // output = word[length -1];
            strcat(output,"ies"); // output += "ies";
            cout << output << endl;
        }
        else if(word[length-1] == '0' || word[length-1] == 's' || word[length-1] == 'x')
        {
            strcpy(output, word);
            strcat(output, "es");
            cout << output << endl;
        }
        else if(word[length-1] == 'h' && word[length-2] == 'c')
        {
            strcpy(output, word);
            strcat(output, "es");
            cout << output << endl;
        }
        else if(word[length-1] == 'h' && word[length-2] == 's')
        {
            strcpy(output, word);
            strcat(output, "es");
            cout << output << endl;
        }
        else
        {
            strcpy(output, word);
            strcat(output, "s");
            cout << output << endl;
        }
    }

    return 0;
}
