#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a;
    cin >> a;

    for(int k=1; k<=a; ++k)
    {
        int arr[36] = {0};
        int Pri[35] = {0};
        int b;
        
        for(int i=0; i<36; ++i)
        {
            cin >> arr[i]; // each char value
        }
        cout << "Case " << k << ":" << endl;
        cin >> b;
        for(int z=0; z<b; z++)
        {
            int c, tmp, low = 2000000001;
            cin >> c;
            
            for(int i=2; i<=36; ++i) // 1 is the most price
            {
                tmp = c; // contain c for cout 
                Pri[i-2] = 0;
                for(int j=i; tmp>0; tmp /= j) // divide by base
                {
                    Pri[i-2] += arr[tmp % j]; // change the base
                }
                if(low > Pri[i-2]) // find the lowest price 
                {
                    low = Pri[i-2];
                }
            }
            cout << "Cheapest base(s) for number " << c << ": ";
            for(int i=0; i<35; ++i)
            {
                if(low == Pri[i])
                {
                    cout << i+2 << " "; // Pri strart from 0, but i start from 2
                } 
            }
            cout << endl;
        }
        //cout << endl;
        if(k != a){cout << endl;}
    }

    return 0;
}