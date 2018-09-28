#include <iostream>
#include <cstdio>

using namespace std;

int main(){

int n, k, coeff;
int coeff_arr[12] = {0};
int factorial[14] = {0};
factorial[0] = 1;

for(int i = 1; i < 13; i++){
        factorial[i] = factorial[i - 1] * i; // fractorial for 1 to 13
    }

while(scanf("%d %d", &n, &k) == 2)
{
    coeff = 1;
    if(n <= 0 || n >= 13 || k <= 0 || k >= 13){
        break;
    }
    for(int i = 0; i < k; i++){
        scanf("%d", &coeff_arr[i]);

        coeff *= factorial[coeff_arr[i]];
    }

    coeff = factorial[n] / coeff; // n!/a!b!c!...
    printf("%d\n", coeff);
}

return 0;
}
