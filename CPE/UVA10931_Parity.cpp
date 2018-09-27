#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{   
    int str;
    while(cin >> str && str)
    {
        int cnt = 0;
        vector<int> num;
        while(str)
        {
            if(str%2)
                cnt++;
            num.push_back(str % 2);
            str /= 2;
        }

        cout << "The parity of ";
        for(int i=num.size()-1; i>=0; --i)
        {
            cout << num[i];
        }
        cout << " is " << cnt << " (mod 2).\n";
    }

    return 0;
}