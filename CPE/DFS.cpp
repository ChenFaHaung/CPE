#include <iostream>
#include <cstdio>

using namespace std;

int dfs(int n, bool Map[25][25], bool visit[25][25], int length)
{
    int longest = 0;

    for(int i=0; i<25; ++i)
    {
        if(Map[n][i] && !visit[n][i]) // map has vavlue and not visit
        {
            visit[n][i] = true;
            visit[i][n] = true;

            int e = dfs(i, Map, visit, length + 1);

            if(e > longest)
                longest = e;

            visit[n][i] = false;
            visit[i][n] = false;
        }
    }


    if(longest == 0)
    {
        return length;
    }
    return longest;
}

int main()
{
    int n, m, s, d;

    //(n>=2 && n<=25) && (m>=1 && m<=25)
    while(scanf("%d %d", &n, &m) != EOF && n>0 && m>0)
    {
        bool Map[25][25] = {false};
        for(int i=0; i<m; ++i)
        {
            cin >> s >> d;
            Map[s][d] = Map[d][s] = true;
        }

        bool isvis[25][25] = {false};
        int longest = 0;

        for(int i=0; i<n; ++i)
        {
            int length = dfs(i, Map, isvis, 0);

            if(length > longest)
            {
                longest = length;
            }
        }

        cout << longest << endl;

    }

    return 0;
}
