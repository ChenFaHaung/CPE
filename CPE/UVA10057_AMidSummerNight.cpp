#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    while(scanf("%d", &a) != EOF)
    {
        int b[65537];
        for(int i=0; i<a; ++i)
        {
            cin >> b[i];
        }

        sort(b, b+a);

        int m = b[(a-1)/2];
        int M = b[a/2];
        int cnt = 0;

        for(int i=0; i<a; ++i)
        {
            if(b[i] == m || b[i] == M)
                ++cnt;
        }
        cout << m << " " << cnt << " " << M-m+1 << endl;

    }
}