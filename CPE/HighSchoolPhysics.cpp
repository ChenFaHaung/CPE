#include <iostream>
#include <cstdio>

using namespace std;

int main(){
int v, t, displace;

while(scanf("%d %d", &v, &t) != EOF){
    if(v < -100 || v > 100 || t < 0 || t > 200){
        break;
    }
    displace = v * t * 2;
    printf("%d\n", displace);
}

return 0;
}
