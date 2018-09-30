#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void output(long long a)
{
    if(a >= 10000000) // the three mode before each kuti 
    {
        output(a/10000000);
        cout << " kuti";
        output(a%10000000);
    }
    else
    {   // calculate step by step
        if(a >= 100000)
            cout << " " << a/100000 << " lakh";
        a %= 100000;

        if(a >= 1000)
            cout << " " << a/1000 << " hajar";
        a %= 1000;

        if(a >=100)
            cout << " " << a/100 << " shata";
        a %= 100;

        if(a>0)
        {
            cout << " " << a;
        }
    }
}

int main()
{
    long long a;
    int cnt = 1;

    while(cin >> a)
    {
        printf("%d.", cnt++);
        output(a);
        if(a == 0) // a may be 0 
            cout << " 0";
        cout << endl;
    }    

    return 0;
}