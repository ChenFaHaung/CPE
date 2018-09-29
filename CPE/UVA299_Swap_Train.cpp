#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int str[100], train, case_t, counter, tmp;

    cin >> case_t;

    while(case_t--)
    {
        counter = 0; // cnt for train swap
        cin >> train; // how many train

        for(int i=0; i<100; i++)
        {
            str[i] = 0; // initial the str
        }
        //memset(str, 0, 100);

        for(int i=0; i<train; i++)
        {
            cin >> str[i]; // input the train 
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
                    // swap(str[j], str[j+1]);
                    counter++;
                }
            }
        }
        cout << "Optimal train swapping takes " << counter << " swaps." << endl;

    }



    return 0;
}
