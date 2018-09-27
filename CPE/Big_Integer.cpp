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
cout << add << endl; // adding
}
// m(n+1) = m(n) + m(n)(���ͤ�) + f(n)(���ͥ�) - m(n)(������)
// f(m+1) = f(n) + tmp_m(n)(���ͥ�) - f(n)(������) + 1(�Ĥ@�N)
return 0;
}
