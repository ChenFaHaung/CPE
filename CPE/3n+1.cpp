#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{

    long start =0, termi = 0;
    long counter=0;
    long n = 0;
    long tmp_swap = 0;
    long tmp_counter = 0;
   // int count_table[1000000] = {0};

    while(scanf("%ld %ld", &start, &termi))
    {
        printf("%ld %ld", start, termi);
        tmp_counter = 0;
        if(start > termi){
            tmp_swap = start;
            start = termi;
            termi = tmp_swap;
        }
        for(long i=start; i<termi+1; i++)
        {
            n = i;
            counter = 0;
            while(n != 1)
            {
                if(n%2 == 0)
                {
                    n /= 2;
                    counter += 1;
                }
                else
                {
                    n = 3*n +1;
                    counter += 1;
                }
                if(n == 1)
                {
                    counter += 1;
                    break;
                }
            }
            if(counter > tmp_counter)
            {
                tmp_counter = counter;
            }
        }
        printf(" %ld\n", tmp_counter);
    }

    return 0;
}
