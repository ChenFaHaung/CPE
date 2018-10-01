#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(void)
{

    int inp;
    int arr[9][9];

    cin >> inp;

    while(inp !=0) // hardcode build the whole map
    {
        cin >> arr[0][0];
        cin >> arr[2][0] >> arr[2][2];
        cin >> arr[4][0] >> arr[4][2] >> arr[4][4];
        cin >> arr[6][0] >> arr[6][2] >> arr[6][4] >> arr[6][6];
        cin >> arr[8][0] >> arr[8][2] >> arr[8][4] >> arr[8][6] >> arr[8][8];

        arr[8][1] = (arr[6][0]-arr[8][0]-arr[8][2])/2;
        arr[8][3] = (arr[6][2]-arr[8][2]-arr[8][4])/2;
        arr[8][5] = (arr[6][4]-arr[8][4]-arr[8][6])/2;
        arr[8][7] = (arr[6][6]-arr[8][6]-arr[8][8])/2;

        for(int i=7; i>=0; i--)
            for(int j=0; j<=i; j++)
                arr[i][j] = arr[i+1][j] + arr[i+1][j+1]; // cal.

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<i; j++)
                cout << arr[i][j] << " ";
            cout << arr[i][i] << endl;
        }
        inp--;
    }
    return 0;
}
