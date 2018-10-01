#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

int i,start,endd,total,num;
int inte[105] = {};

cin >> i;

for(int j=1; j<=100; j++)
{
    if(j%2 == 1)
        inte[j] = j;
    inte[j] += inte[j-1];
}

num = 0;
/*while(num++ < i)
{
    cin >> start >> endd;

    if(start == 0)
    {
        start = 1;
    }

    cout << "Case " << num << ": " << inte[endd] - inte[start - 1] << endl;
}*/

for(int j=0; j<i; ++j)
{
    num = 0;
    cin >> start >> endd;

    for(int k=start; k<=endd; ++k)
        if(k%2){num += k;}
        cout << "Case " << j+1 << ": " << num << endl;
}
return 0;
}
