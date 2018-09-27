#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    if(a > b)
        return true;
    else
        return false;
}

int main(void)
{
    int a[1001];
    int num,i;

    cin >> num;

    for(i=0; i<num; i++)
    {
        cin >> a[i];
    }

    sort(a, a+num, compare); // remember the length, and array
    // compare for large to small

    for(int i=0; i<num; ++i)
    {
        cout << a[i];
    }
    cout << a[i-1] << " " << a[0] << endl;

    return 0;
}
