#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void){

int in_num, out_num, top, north, west, ch_top;
char dir[10];

while(scanf("%d",&in_num) && in_num)
{
    top = 1;
    north = 2;
    west = 3;

    while(in_num--)
    {
        cin >> dir;
        ch_top = top;
        if(dir[0] == 'n')
        {
            top = 7 - north;
            north = ch_top;
        }
        else if(dir[0] == 'e')
        {
            top = west;
            west = 7 - ch_top;
        }
        else if(dir[0] == 's')
        {
            top = north;
            north = 7 - ch_top;
        }
        else if(dir[0] == 'w')
        {
            top = 7 - west;
            west = ch_top;
        }
    }
    cout << top << endl;
}


return 0;

}
