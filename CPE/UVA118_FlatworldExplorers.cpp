#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

char orien[4] = {'N', 'E', 'S', 'W'}; // four direction
int moving[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; // four movement

typedef struct pos{
    int X, Y, dir;
    char ori; 
}Pos; // position, direction, and turn instruction

int main()
{
    int x, y, map[55][55] = {0};
    Pos mov;

    cin >> x >> y; // boarder

    while(cin >> mov.X >> mov.Y >> mov.ori)
    {
        for(int i=0; i<4; ++i)
        {
            if(mov.ori == orien[i])
            {
                mov.dir = i;
                break;
            }
        } // find the direction and match

        char track[105];
        scanf("%s", track); // cin the track

        bool flag = 0; // for out of bound check
        for(int i=0; track[i]; ++i)
        {
            if(track[i] == 'R')
            {
                mov.dir = (mov.dir+1) % 4; // + 1: rotate 90 degree right
                mov.ori = orien[mov.dir];
            }
            else if(track[i] == 'L')
            {
                mov.dir = (mov.dir+3) % 4; // + 3: rotate 270 degree right
                mov.ori = orien[mov.dir];
            }
            else if(track[i] == 'F')
            {
                int nextX = mov.X + moving[mov.dir][0]; // according to direction
                int nextY = mov.Y + moving[mov.dir][1];

                if(nextX < 0 || nextY < 0 || nextX > x || nextY > y)
                {
                    if(map[mov.X][mov.Y] < 0)
                        continue; // previous round dead
                    map[mov.X][mov.Y] = -1; // this round dead
                    flag = 1; // dead
                    break;
                }
                mov.X = nextX; // remember to change the coordinate
                mov.Y = nextY;
            }
        }

        if(flag)
            cout << mov.X << " " << mov.Y << " " << mov.ori << " LOST" << endl;
        else
            cout << mov.X << " " << mov.Y << " " << mov.ori << endl;

    }

    return 0;
}