#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string a;
    int total_o, total_e, tmp=0, comp;

    while(cin >> a)
    {
        if(a[0] == '0')
        {
            break;
        }
        total_o = 0;
        total_e = 0;
        for(int i=0; i<a.length(); ++i)
        {
            tmp = a[i] - '0';
            if(i%2 == 0) // even sum
                total_e += tmp;
            else // odd sum
                total_o += tmp;  
        }
        comp = abs(total_e - total_o); // 11 multiple

        if(comp%11 == 0)
            cout << a << " is a multiple of 11." << endl;
        else
            cout << a << " is not a multiple of 11." << endl;
    }

    return 0;
}