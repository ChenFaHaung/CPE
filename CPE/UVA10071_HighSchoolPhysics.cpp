#include <iostream>
#include <cstdio>

using namespace std;

int main(){
int v, t, displace;

while(scanf("%d %d", &v, &t) != EOF){
    if(v < -100 || v > 100 || t < 0 || t > 200){ // check the limitation
        break;
    }
    displace = v * t * 2; // displacement formula
    printf("%d\n", displace);
}

return 0;
}
