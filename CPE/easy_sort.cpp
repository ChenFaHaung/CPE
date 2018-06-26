#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
    int a[1001];
    int num,i;

    cin >> num;

    for(i=0; i<num; i++)
    {
        cin >> a[i];
    }

    sort(a, a+i);

    cout << a[i-1] << " " << a[0] << endl;

    return 0;
}
