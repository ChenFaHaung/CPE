#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
    double s, a;
    string str;
    const double pi = acos(-1);
    while(cin >> s >> a >> str)
    {
        if(str[0] == 'm'){a/=60;}
        if(a>180){a = 360 - a;}
        s += 6440;
        printf("%.6lf %.6lf\n", s*pi*a/180.0, 2*s*sin(a*pi/180.0/2.0)); 
    }
    return 0;
}