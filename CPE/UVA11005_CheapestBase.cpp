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
            cin >> arr[i];
        }
        cout << "Case " << k << ":" << endl;
        cin >> b;
        for(int z=0; z<b; z++)
        {
            int c, tmp, low = 2000000001;
            cin >> c;
            
            for(int i=2; i<=36; ++i)
            {
                tmp = c;
                Pri[i-2] = 0;
                for(int j=i; tmp>0; tmp /= j)
                {
                    Pri[i-2] += arr[tmp % j];
                }
                if(low > Pri[i-2])
                {
                    low = Pri[i-2];
                }
            }
            cout << "Cheapest base(s) for number " << c << ": ";
            for(int i=0; i<35; ++i)
            {
                if(low == Pri[i])
                {
                    cout << i+2 << " ";
                    //if(i != 34){cout << " ";}   
                } 
            }
            cout << endl;
        }
        //cout << endl;
        if(k != a){cout << endl;}
    }

    return 0;
}