#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;

    while(cin >> a >> b)
    {
        if(a == EOF || b == EOF){break;}

        vector<int> d;
        int flag = 0;

        while(a/b >= 1)
        {
            d.push_back(a);

            if(a%b != 0)
            {
                flag = 1;
                break;
            }
            else if(a/b == 1 && a%b == 0)
            {
                //a /= b;
                d.push_back(1);
                break;
            }
            else
                a /= b;
        }

        if(flag == 1){cout << "Boring!" << endl;}
        else
        {
            for(int i=0; i<d.size()-1; ++i)
            {
                cout << d[i] << " ";
            }
            cout << d[d.size()-1] << endl;
        }
    }

    return 0;
}