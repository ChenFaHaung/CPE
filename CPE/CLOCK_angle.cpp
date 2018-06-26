#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void){

int h, m;
double clo_h, clo_m, ans;

while(scanf("%d:%d", &h, &m) && (h | m))
{
    if(h == 12)
    {
        h = 0;
    }
    clo_h = 30*h + 0.5*m;
    clo_m = 6*m;
    ans = clo_h - clo_m;

    while(ans < 0)
    {
        ans += 360;
    }

    if(ans > 180)
    {
        ans = 360 - ans;
    }
    printf("%.3lf\n", ans);
}

return 0;

}
