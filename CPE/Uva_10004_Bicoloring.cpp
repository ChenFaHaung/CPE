#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<int> point[210];

bool BFS(int start){

    queue<int> que;
    que.push(start);

    int visit[210] = {0};
    while(!que.empty())
    {
        int curr = que.front();
        que.pop();

        for(int i=0; i<point[curr].size(); ++i)
        {
            int next = point[curr][i];
            if(!visit[next])
            {
                que.push(next);
            
                if(visit[curr] == 1)
                {
                    visit[next] = 2;
                }
                else
                {
                    visit[next] = 1;
                }
            }
            else if(visit[next] == visit[curr])
            {
                return false;
            }

        }
    }
    return true;
}

int main()
{
    int cs, vertex;

    while(cin >> cs && cs != 0)
    {
        for(int i=0; !point[i].empty(); ++i)
        {
            point[i].clear();
        }

        cin >> vertex;

        int start, end;

        for(int j=0; j<vertex; ++j)
        {
            cin >> start >> end;
            point[start].push_back(end);
            point[end].push_back(start);
        }
        if(BFS(start))
        {
            cout << "BICOLORABLE." << endl;
        }
        else 
        {
            cout << "NOT BICOLORABLE." << endl;
        }
    }

    return 0;
}
