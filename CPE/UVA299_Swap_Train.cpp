#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int str[100], train, case_t, counter, tmp;

    cin >> case_t;

    while(case_t--)
    {
        counter = 0;
        cin >> train;

        for(int i=0; i<100; i++)
        {
            str[i] = 0;
        }

        for(int i=0; i<train; i++)
        {
            cin >> str[i];
        }

        for(int i=0; i<train-1; i++)
        {
            for(int j=0; j<train-1; j++)
            {
                if(str[j]>str[j+1])
                {
                    tmp = str[j];
                    str[j] = str[j+1];
                    str[j+1] = tmp;

                    counter++;
                }
            }
        }
        cout << "Optimal train swapping takes " << counter << " swaps." << endl;

    }



    return 0;
}
