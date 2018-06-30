#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
// uva 1587
typedef struct pallet
{
    int h, w;
} box;

int n = 6;
int minn = 0;

bool compare(pallet &a, pallet &b)
{
    if(a.w < b.w)
        return true;
    else if(a.w == b.w && a.h < b.h)
        return true;
    else
        return false;
}

int main(void)
{
    box box[6];

    while(scanf("%d %d", &box[0].w, &box[0].h) != EOF)
    {
        int flag = 0;

        if(box[0].w > box[0].h)
        {
            swap(box[0].w, box[0].h);
        }
        for(int i= 1; i<n; i++)
        {
            scanf("%d %d",&box[i].w, &box[i].h);
            if(box[i].w > box[i].h)
            {
                swap(box[i].w, box[i].h);
            }
        }

        sort(box, box+n, compare);

        for(int k = 0; k<6; k+=2)
        {
            if(box[k].w != box[k+1].w || box[k].h != box[k+1].h)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            if(box[0].w != box[2].w || box[0].h != box[4].w || box[2].h != box[4].h)
                flag = 1;
        }

        if(flag ==1)
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
            cout << "POSSIBLE" << endl;

    }

    return 0;
}
