#include <iostream>
#include <cstdio>

using namespace std;

int lis(int arr[], int n)
{
    int i, j;
    int lis[65535];
    int longest = 0;

    for(int i=0; i<n; ++i)
        lis[i] = 1;

    for(int i=0; i<n; ++i)
    {

        for(int j=0; j<i; ++j)
        {
            if(arr[i] > arr[j] && lis[j]+1 > lis[i] )
            {
                lis[i] = lis[j]+1;
            }
        }
    }

    for(int i=0; i<n; ++i)
    {
        if(longest < lis[i])
            longest = lis[i];
    }

    return longest;
}

int main()
{
    int a, ans;

    while (cin >> a && a!=0)
    {
        int arr[65535] = {0};
        for(int i=0; i<a; ++i)
        {
            cin >> arr[i];
        }

        cout << lis(arr, a) << endl;

    }

    return 0;
}
