#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    long long int a;

    while(cin >> a && a > 0)
    {
        long long int cas = 1;
        for(long long int i=0; i<a; ++i)
        {
            char b,c;
            long long int d, arr[101*101];
            int flag = 0;
            cin >> b >> c >> d;

            for(long long int j=0; j<d*d; ++j)
            {
                cin >> arr[j];
            }

            for(long long int j=0; j<d*d; ++j)
            {
                if(arr[j] != arr[d*d-1-j] || arr[j] < 0)
                    flag = 1;
            }
            if(flag)
            {
                cout << "Test #" << cas << ": Non-symmetric." << endl;
            }
            else
            {
                cout << "Test #" << cas << ": Symmetric." << endl;
            }
            cas++;
        }
    }

    return 0;
}