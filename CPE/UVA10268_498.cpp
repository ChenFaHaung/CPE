#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a;

    while(cin >> a)
    {
        string str, str1;
        vector<int> d;
        int b, tmp=0;
        int flag = 0;
        char c;
        long long ans=0;
        getline(cin, str);
        getline(cin, str1);
        for(int i=0; i<str1.length();++i)
        {
            if(str1[i] == '-') // there must be number < 0
                flag = 1;
            if(isdigit(str1[i]))
            {
                d.push_back(str1[i]-'0');
                if(flag)
                {
                    d.back() *= -1;
                    flag = 0;
                }
            }
        }

        tmp = d.size();
        for(int i=0; i<d.size()-1; ++i)
        {
            tmp--;
            ans *= a; // bottom up 
            ans += tmp*d[i];// () first
        }
        cout << ans << endl;
    }
    return 0;
}