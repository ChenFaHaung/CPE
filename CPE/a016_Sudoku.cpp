#include <iostream>
#include <cstdio>
#include <set>

using namespace std;

set<int> row[9], col[9], block[3][3];

void sudoku(int i, int j, int val)
{
    row[i].insert(val);
    col[j].insert(val);
    block[i/3][j/3].insert(val);
}

int main()
{   
    int first[9] = {0};

    while(scanf("%d %d %d %d %d %d %d %d %d", 
    &first[0], &first[1], &first[2], &first[3], 
    &first[4], &first[5], &first[6], &first[7], &first[8])!= EOF)
    {
        for(int i=0; i<9; ++i)
        {
            row[i].clear();
            col[i].clear();
            block[i/3][i%3].clear();
        }

        for(int i=0; i<9; ++i)
            if(first[i] > 0 && first[i] < 10)
                sudoku(0, i, first[i]);
        
        int v;
        for(int i=1; i<9; ++i)
        {
            for(int j=0; j<9; ++j)
            {
                cin >> v;
                if(v > 0 && v < 10)
                    sudoku(i, j, v);
            }
        }

        int flag = 0;
        for(int i=0; i<9; ++i)
        {
            if(row[i].size() != 9 || col[i].size() != 9 || block[i/3][i%3].size() != 9)
            {
                flag = 1;
                break;
            }
        }

        if(flag)
            cout << "no\n";
        else  
            cout << "yes\n";
    }


    return 0;
}