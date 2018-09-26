#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;


vector<int> prim;

bool isprime(int a)
{
    for(int i = 0; prim[i]<=sqrt(a); ++i) // pass all prim until sqrt itself
    {
        if(a % prim[i] == 0) // % == 0 means not prim
        {
            return false;
        }
    }
    return true;
}

void build_prime()
{
    prim.push_back(2); // vector built to reduce time
    prim.push_back(3);
    prim.push_back(5);
    prim.push_back(7);

    int curr_prim = prim.back(); // remember to point to the end
    while(curr_prim <= 999999) // construct all prime number
    {
        curr_prim += 2; // prim num is odd

        if(isprime(curr_prim)) // if prime and push back
        {
            prim.push_back(curr_prim);
        }
    }

}

int main()
{
    int test;

    build_prime(); // call function

    while(scanf("%d", &test) != EOF)
    {
        if(isprime(test))  //  call the function
            cout << "���" << endl;
        else
            cout << "�D���" << endl;
    }

    return 0;
}
