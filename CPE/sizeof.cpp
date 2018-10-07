#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    char a[] = {1, 2, 3, 4};
    int b;
    short c;
    long d;
    long long e;
    float f;
    double g;
    cout << "char: " << sizeof(a) << endl;
    cout << "int: " << sizeof(b) << endl;
    cout << "short: " << sizeof(c) << endl;
    cout << "long: " << sizeof(d) << endl;
    cout << "long long: " << sizeof(e) << endl;
    cout << "float: " << sizeof(f) << endl;
    cout << "double: " << sizeof(g) << endl;
    return 0;
}