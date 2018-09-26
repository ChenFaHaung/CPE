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
        int b[65537]; // question require
        for(int i=0; i<a; ++i)
        {
            cin >> b[i];
        }

        sort(b, b+a); // sort the input for finding middium

        int m = b[(a-1)/2]; // find lower mid
        int M = b[a/2]; // find mid
        int cnt = 0;

        for(int i=0; i<a; ++i)
        {
            if(b[i] == m || b[i] == M)
                ++cnt;
        }
        cout << m << " " << cnt << " " << M-m+1 << endl; // print lower one and cal. the possible mid

    }
}