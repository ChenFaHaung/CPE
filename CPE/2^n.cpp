#include <iostream>
#include <cstdio>

using namespace std;

int lg2(int num)
{
    if(num == 1)
        return 0;
    else
        return 1+lg2(num >> 1);
}

int main()
{
    int num;
    cin >> num;

    if(num & (num-1))
        cout << num << " is not a 2^n\n";
    else
        cout << num << " is 2^ " << lg2(num) << ".\n";
    return 0;
}