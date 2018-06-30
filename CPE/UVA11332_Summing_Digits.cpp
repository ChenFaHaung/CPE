#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main()
{

    string N=0;

    cout <<1<<endl;
    cin >> N;
    while(1)
    {
        string cal;
        cal = N;
        cout <<1<<endl;
CONTI:
        int add = 0;
        for(int j = 0; j < cal.length(); j++)
        {
            add += cal[j] - '0';  //ACK11
        }
        if(add == 0)
            break;
        else if(add < 10)
           cout << add << endl;
        else {
            char temp[10000];
            sprintf(temp,"%d",add);
            cal = string(temp);
            goto CONTI;
        }


        cin >> N;
    }
// m(n+1) = m(n) + m(n)(公生公) + f(n)(母生母) - m(n)(公死掉)
// f(m+1) = f(n) + tmp_m(n)(公生母) - f(n)(母死掉) + 1(第一代)
    return 0;
}
