#include <sstream>
#include <iostream>
#include <string>

using namespace std;

void show_array(int temp[], int n){
    for(int i = 0; i < n; i++){
        cout << temp[i] << " ";
        cout << "" << endl;
    }
}
int main(){
    string line = "test one two three.";
    int arr[4];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good() && i < 4){
        ssin >> arr[i];
        ++i;
    }
    show_array(arr, 4);
    /*
    for(i = 0; i < 4; i++){
        cout << arr[i] << endl;
    }*/

    string sss = "";
    //cin >> sss;
    //cout << sss << endl;
}
