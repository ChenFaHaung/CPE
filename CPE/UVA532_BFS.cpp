#include <iostream>
#include <cstdio>
#include <queue>

using namespace std;

char dun[35][35][35];
int len[35][35][35];
int l, xi, yi;
const int dir[6][3] = { {1,0,0}, {0,1,0}, {0,0,1}, {-1,0,0}, {0,-1,0}, {0,0,-1}};

typedef struct point {
    int x;
    int y;
    int z;
} Point;

int BFS(int a, int b, int c){

    len[a][b][c] = 0;

    Point now = {a, b, c};
    Point next;
    queue<Point> q;
    q.push(now);
    dun[a][b][c] = '#';

    while(!q.empty())
    {
        now = q.front();
        q.pop();
        for(int i=0; i<6; ++i)
        {
            next.x = now.x + dir[i][0];
            next.y = now.y + dir[i][1];
            next.z = now.z + dir[i][2];

            if(next.x<0 || next.x>=l || next.y<0 || next.y>=xi || next.z<0 || next.z>=yi)
                continue;
        
            if(dun[next.x][next.y][next.z] != '#')
            {
                len[next.x][next.y][next.z] = len[now.x][now.y][now.z] + 1;

                if(dun[next.x][next.y][next.z] == 'E')
                {
                    return len[next.x][next.y][next.z];
                }
                
                dun[next.x][next.y][next.z] = '#';
                q.push(next);
            }
        }
    }
    
    return -1;
}

int main()
{
    char c;
    while(cin >> l >> xi >> yi)
    {
        if(!l && !xi && !yi)
        {
            break;
        }

        int start_x, start_y, start_z;

        for(int i=0; i<l; ++i)
        {
            for(int j=0; j<xi; ++j)
            {
                cin >> dun[i][j];
                for(int k=0; k<yi; ++k)
                {
                    if(dun[i][j][k] == 'S')
                    {
                        start_x = i;
                        start_y = j;
                        start_z = k;
                    }
                }
            }
        }

        int min = BFS(start_x, start_y, start_z);

        if(min != -1)
        {
            cout << "Escaped in " << min << " minute(s)." << endl;
        }
        else
        {
            cout << "Trapped!" << endl;
        }

    }

    return 0;
}