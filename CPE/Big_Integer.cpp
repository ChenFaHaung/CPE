#include <iostream>
#include <cstdio>

using namespace std;

int main(){

int N=0;

cin >> N;

for(int i = 0; i < N; i++){
    string cal;
    cin >> cal;
    int add = 0;
    for(int j = 0; j < cal.length();j++){
        add += cal[j] - '0';  //ACK11
    }
cout << add << endl;
}
// m(n+1) = m(n) + m(n)(公生公) + f(n)(母生母) - m(n)(公死掉)
// f(m+1) = f(n) + tmp_m(n)(公生母) - f(n)(母死掉) + 1(第一代)
return 0;
}
