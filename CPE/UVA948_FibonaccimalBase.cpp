#include <iostream>
#include <cstdio>

using namespace std;

int main(void){

int in_num;
int f_arr[40];

cin >> in_num;

f_arr[0] = 1; // fibonacci first
f_arr[1] = 2;

for(int i=2; i<40; i++) // build the fibonacci array base
    f_arr[i] = f_arr[i-1] + f_arr[i-2];

while(in_num--)
{
    int c;
    int check = 0;
    cin >> c;
    cout << c << " = ";

    for(int i=39; i>=0; i--)
    {
        if(c >= f_arr[i]) // if match print 1
        {
            cout << "1";
            c -= f_arr[i];
            check = 1; // first digit
        }
        else if(check && c < f_arr[i])
            cout << "0";
    }
    cout << " (fib)" << endl;
}
return 0;

}
