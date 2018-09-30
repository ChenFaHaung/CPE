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
    getline(cin, s); // for a's \n
    getline(cin, s); // for an blank line
    while(a--, getline(cin, s))
    {
        int all = 0;
        map<string, int> msi;
        do
        {
            msi[s]++;
            ++all; // cal. the total data
        }while(getline(cin, s) && s!="");

        for(map<string, int>::iterator p=msi.begin(); p!=msi.end(); ++p)
        {
            printf("%s %.4f\n", (*p).first.data(), (*p).second*100./all);
        }
        if(a){cout << endl;}
    }

    return 0;
}