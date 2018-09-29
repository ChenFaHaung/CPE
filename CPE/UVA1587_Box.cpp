#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;
// uva 1587
typedef struct pallet{
    int h, w;
} box; // record the box width and height

int n = 6; // six input
int minn = 0;

bool compare(pallet &a, pallet &b)
{
    if(a.w < b.w)
        return true;
    else if(a.w == b.w && a.h < b.h)
        return true;
    else
        return false;
} // width first sort

int main(void)
{
    box box[6];

    while(scanf("%d %d", &box[0].w, &box[0].h) != EOF)
    {
        int flag = 0;

        if(box[0].w > box[0].h)
            swap(box[0].w, box[0].h); // each wdith and height swap first

        for(int i= 1; i<n; i++)
        {
            scanf("%d %d",&box[i].w, &box[i].h);
            if(box[i].w > box[i].h)
                swap(box[i].w, box[i].h);
        }

        sort(box, box+n, compare); // sort with compare function

        for(int k = 0; k<6; k+=2)
        {
            if(box[k].w != box[k+1].w || box[k].h != box[k+1].h)
            { // check for any pair of widths or heights difference
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        { // no different pair check rule
            if(box[0].w != box[2].w || box[0].h != box[4].w || box[2].h != box[4].h)
                flag = 1;
        }

        if(flag ==1)
            cout << "IMPOSSIBLE" << endl;
        else
            cout << "POSSIBLE" << endl;
    }
    return 0;
}
