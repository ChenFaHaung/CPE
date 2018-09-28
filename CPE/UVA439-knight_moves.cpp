#include <iostream>
#include <cstdio>
#include <queue>
#include <string>

using namespace std;

typedef struct pointerto_binary_function{
    int x,y,step; // x,y: position
}Point; // struct Point constructor

int pos[8][2] = { // moving ways
    {1,-2},
    {-1,-2},
    {1,2},
    {-1,2},
    {-2,1},
    {-2,-1},
    {2,1},
    {2,-1}
};

int BFS(Point s, Point d)
{
    if(s.x == d.x && s.y == d.y)
    {
        return s.step;
    } // src meets dest
    
    Point now; // current condition
    bool isvis[8][8] = {false}; // walking through record
    queue<Point> q; // queue!
    q.push(s);

    while(!q.empty())
    {
        now = q.front();
        q.pop();
        isvis[now.x][now.y] = true;
        Point next;

        for(int i=0; i<8; ++i)
        {
            next.x = now.x + pos[i][0]; // every possible way
            next.y = now.y + pos[i][1];
            next.step = now.step + 1; // move

            if((next.x<8 && next.x>=0) && (next.y<8 && next.y>=0) && !isvis[next.x][next.y])
            { // in the range and never visit
                isvis[next.x][next.y] = true;
                if(next.x == d.x && next.y == d.y)
                {
                    return next.step; // until meet the dest.
                }
                q.push(next); // no meet queue the next step
            }
        }
    }

    return 0;
}

int main()
{
    string str1, str2;
    Point src, des;

    while(cin >> str1 >> str2)
    {
        src.step = 0; // initail step
        src.x = str1[0] - 'a'; // str to number
        src.y = str1[1] - '1';
        des.x = str2[0] - 'a';
        des.y = str2[1] - '1';
        
        int mov = BFS(src, des);

        cout << "To get from " << str1 << " to " << str2 << " takes " << mov << " knight moves." << endl;
    }
    return 0;
}