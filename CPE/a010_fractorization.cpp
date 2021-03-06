#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

vector<int> pri;

bool isodd(int num)
{
    for(int i=0; pri[i] < sqrt(num); ++i)
    {
        if(num % pri[i] == 0)
        {
            return false;
        }
    }
    return true;
}

void primenum()
{

    pri.push_back(2);
    pri.push_back(3);
    pri.push_back(5);
    pri.push_back(7);
    pri.push_back(11);

    int cur_num = pri.back();
    while(cur_num <= 1000000)
    {
        cur_num += 2;
        if(isodd(cur_num))
        {
            pri.push_back(cur_num);
        }
    }

}


int main()
{
    int nn;
    primenum();
    while(scanf("%d", &nn) != EOF)
    {
        for(int i=0; i<pri.size(); ++i)
        {
            int ans = 0;
            while(nn % pri[i] == 0) // the prime multi
            {
                nn /= pri[i]; // for the next cal.
                ++ans; // this prime pow num
            }

            if(ans > 1) // have more than one prime must print ^
            {
                cout << pri[i] << "^" << ans ;
                if(nn > 1)
                {
                    cout << " * ";
                }
            }
            else if(ans == 1) // only one has no ^
            {
                cout << pri[i] ;
                if(nn > 1)
                {
                    cout << " * ";
                }
            }
            if(nn == 1) // in the end, nn will be 1
            {
                cout<< endl;
                break;
            }
        }
    }

    return 0;
}
