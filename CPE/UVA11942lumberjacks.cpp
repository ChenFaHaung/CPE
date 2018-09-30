#include <iostream>
#include <cstdio>
#include <string.h>
#include <cstdlib>

using namespace std;

int main(void)
{

    int input_line;

    cin >> input_line;
    int mm[input_line];

    for(int i=0; i<input_line; i++)
    {
        if(input_line>20 || input_line<=0)
            break;

        int check = 0;
        int input_arr[10];
        int count_num = 0;

        for(int j=0; j<10; j++)
            cin >> input_arr[j];

        if(input_arr[0] < input_arr[1]) // check increasing
            check = 0;
        else // decreasing
            check = 1;
        
        for(int j=0; j<9; j++)
        {
            if(check==0 && (input_arr[j] < input_arr[j+1]))
                count_num++;
            else if(check==1 && (input_arr[j] > input_arr[j+1]))
                count_num++;
            else
                count_num = 0;
        }

        if(count_num == 9)
            mm[i] = 1;
        else
            mm[i] = 0;
    }

    cout << endl << "Lumberjacks:" << endl;
    for(int i=0; i<input_line; i++)
    {
        if(mm[i] == 1)
            cout << "Ordered" << endl;
        else
            cout << "Unordered" << endl;
    }
    return 0;
}

