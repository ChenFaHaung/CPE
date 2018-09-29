#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;

vector<int> pri;

bool isprim(int a)
{
    for(int i=0; pri[i] <= sqrt(a); ++i)
    {
        if(a % pri[i] == 0)
            return false;
    }
    return true;
}

void pri_gen(void)
{
    pri.push_back(2);
    pri.push_back(3);
    pri.push_back(5);
    pri.push_back(7);

    int now = pri.back();

    while(now < 999999)
    {
        now += 2;

        if(isprim(now))
            pri.push_back(now);
    }
}
bool isprime(int a)
{
    if(a == 2 || a == 3 || a == 5 || a == 7)
    {
        return true;
    }
    for(int i=2; i<=sqrt(a); ++i)
    {
        if(a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int in;

    while(scanf("%d", &in) != EOF && in != 0)
    {
        if(in < 4 || in%2==1) // even and small than 4 break
        {
            break;
        }

        int cnt = 0;
        int tmp = 0;

        for(int i=2; i<=in/2; i++)
        {
            tmp = in - i; // in and i will be both prime

            if(isprime(i) && isprime(tmp))
            {
                ++cnt;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}