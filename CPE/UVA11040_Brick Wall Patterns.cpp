#include <iostream>
#include <cstdio>

using namespace std;

long long int fib(int n) {
    if(n==1 || n==0)
        return 1;
    return fib(n-1) + fib(n-2);
}
int main(){
int num_brick=0;
long long int answer[52]={0};
answer[0] = answer[1] = 1;
    for(int i=2; i<52; i++){
       answer[i] = answer[i-2] + answer[i-1];
    }
while(scanf("%d", &num_brick) != EOF ){

    if(num_brick <= 0 || num_brick >50)
        break;

    printf("%lld\n", fib(num_brick));
}

return 0;
}
