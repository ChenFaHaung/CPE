#include <iostream>
#include <cstdio>

using namespace std;

int main(void){
//FILE *fo = fopen("output.txt", "w");
long long int f, m;
int N;
long long int temp_m;

while(scanf("%d", &N) != EOF){
    if (N == -1)
        break;
    f = 1, m = 0;
    for (int i = 0; i < N; ++i){
        temp_m = m;
        m = (m+f);
        f =  temp_m +1;
    }

    printf("%lld %lld\n", m, m+f);
}

return 0;
}
