#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int bottle = 0, total_case = 0, e = 0, f = 0, c = 2;
    int tmp = 0, now_remain = 0, output = 0;

    cin >> total_case;

    for(int i = 0;i < total_case; i++){
        cin >> e >> f >> c;
        bottle = e + f;
        output = 0;
        while(bottle >= c){
            now_remain = bottle / c + bottle % c;
            output += bottle / c;
            bottle = now_remain;
        }
        cout << output << endl;
    }

}
