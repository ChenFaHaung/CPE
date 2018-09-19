#include<cstdio>
#include<cstring>
#include<cmath>

short int p[1000001];

int gcd(int m, int n)
{
    int k;
    while (k = m % n)
    {
        m = n;
        n = k;
    }
    return n;
}

int main()
{
    int max;
    while (scanf("%d", &max) == 1)
    {
        int numTuple = 0; //number of tuple(a,b,c)
        memset(p, 0, sizeof(p));

        for (int x = 1; x < 1000; ++x)
        {
            for (int y = x + 1;; y += 2)
            {
                if (gcd(x, y) != 1) continue;

                int a, b, c; //tuple(a,b,c)
                a = y * y - x * x;
                b = 2 * x * y;
                c = y * y + x * x;
                if (c > max) break;

                numTuple++;

                int ma = a, mb = b, mc = c;
                while (mc <= max)
                {
                    p[ma] = p[mb] = p[mc] = 1;
                    ma += a;
                    mb += b;
                    mc += c;
                }
            }
        }
        int numNotInTuple = max;
        for (int i = 0; i <= max; ++i)
            numNotInTuple -= p[i];

        printf("%d %d\n", numTuple, numNotInTuple);
    }
    return 0;
}