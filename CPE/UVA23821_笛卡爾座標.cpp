#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
int n = 1, count_n = 1, answer = 0, i_tmp;
int start[5][5];
int start_add, goal_add, layer, total;
scanf("%d", &n);
count_n = n;
while(n >= 1 && n <= 500){
    start_add = 0;goal_add = 0;layer = 0;total = 0;answer = 0;
    for(int i = 0; i<2; i++){
        for(int j = 0; j < 2; j++){
            scanf("%d", &start[i][j]);
        }
    }
    start_add = start[0][0] + start[0][1];
    goal_add = start[1][0] + start[1][1];

    layer = goal_add - start_add; //transit

    total += layer;

    for(int i = start_add+1 ; i < goal_add ; i++){
        total += i;
    }
    total = (start_add - start[0][0]) + (goal_add- start[1][1]) + total;
    answer = count_n-n+1;
    printf("Case %d: %d\n", answer,total);
    n--;
}

return 0;
}
