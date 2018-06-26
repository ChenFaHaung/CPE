#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;


vector<int> prim;

bool isprime(int a)
{
    for(int i = 0; prim[i]<=sqrt(a); ++i)
    {
        if(a % prim[i] == 0)
        {
            return false;
        }
    }
    return true;
}

void build_prime()
{
    prim.push_back(2);
    prim.push_back(3);
    prim.push_back(5);
    prim.push_back(7);

    int curr_prim = prim.back();
    while(curr_prim <= 999999)
    {
        curr_prim += 2;

        if(isprime(curr_prim))
        {
            prim.push_back(curr_prim);
        }
    }

}

int main()
{
    int test;

    build_prime();

    while(scanf("%d", &test) != EOF)
    {
        if(isprime(test))
            cout << "質數" << endl;
        else
            cout << "非質數" << endl;
    }

    return 0;
}
