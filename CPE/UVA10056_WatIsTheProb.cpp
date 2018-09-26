#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int c, N, I;
    double p;
    
    while(scanf("%d", &c)!=EOF){
        for(int i=0; i<c; ++i)
        {
            cin >> N >> p >> I; // N: people enter the game; p: win probability; I: the winner 
        
        
        double suc;
        suc = pow((1-p), (I-1)) * p;

        double last = 0; // last probability
            while (suc - last > 1e-7) { // probability less than 1e-7
                I += N; // if no fit the rule, add the players
                last = suc;
                suc += pow(1-p, I-1) * p; 
            }

            // Print the result
            printf("%.4f\n", suc);
        }
    }
    
}