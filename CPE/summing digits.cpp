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
// m(n+1) = m(n) + m(n)(���ͤ�) + f(n)(���ͥ�) - m(n)(������)
// f(m+1) = f(n) + tmp_m(n)(���ͥ�) - f(n)(������) + 1(�Ĥ@�N)
    return 0;
}
