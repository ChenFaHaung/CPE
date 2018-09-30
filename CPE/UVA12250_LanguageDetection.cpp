#include <iostream>
#include <string>
#include <cstdio>

using namespace std;


int main()
{
    string a;
    int cnt = 1;

    while(cin >> a) // easy cout if else
    {
        if(a == "#")
            break;
        if(a == "BONJOUR")
            cout << "Case " << cnt++ << ": FRENCH" << endl;
        else if(a == "CIAO")
            cout << "Case " << cnt++ << ": ITALIAN" << endl;
        else if(a == "ZDRAVSTVUJTE")
            cout << "Case " << cnt++ << ": RUSSIAN" << endl;
        else if(a == "HELLO")
            cout << "Case " << cnt++ << ": ENGLISH" << endl;
        else if(a == "HOLA")
            cout << "Case " << cnt++ << ": SPANISH" << endl;
        else if(a == "HALLO")
            cout << "Case " << cnt++ << ": GERMAN" << endl;
        else   
            cout << "Case " << cnt++ << ": UNKNOWN" <<endl;
    }


    return 0;
}