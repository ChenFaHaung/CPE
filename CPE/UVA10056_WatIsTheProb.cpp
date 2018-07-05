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
            cin >> N >> p >> I;
        
        
        double suc;
        suc = pow((1-p), (I-1)) * p;

        double last = 0;
            while (suc - last > 1e-7) {
                I += N;
                last = suc;
                suc += pow(1-p, I-1) * p;
            }

            // Print the result
            printf("%.4f\n", suc);
        }
    }
    
}