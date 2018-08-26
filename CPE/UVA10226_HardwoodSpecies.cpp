#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main()
{
    int a;
    cin >> a;
    string s;
    getline(cin, s);
    getline(cin, s);
    while(a--, getline(cin, s))
    {
        int all = 0;
        map<string, int> msi;
        do
        {
            msi[s]++;
            ++all;
        }while(getline(cin, s) && s!="");

        for(map<string, int>::iterator p=msi.begin(); p!=msi.end(); ++p)
        {
            printf("%s %.4f\n", (*p).first.data(), (*p).second*100./all);
        }
        if(a){cout << endl;}
    }

    return 0;
}