#include <iostream>
#include <cstdio>

using namespace std;

int main(){

int money, temp = 0, ten = 10, five = 5, one = 1;
cin >> money;
for(int i = 0; ten*i <= money; i++){//�Q�����X��
    temp = money - ten * i;
    for(int h = 0; five* h <= temp; h++){//�������X��
        one = temp - five * h;
        cout << "10:" << i << " 5:" << h << " 1:" << one << endl;
    }
}
return 0;
}
