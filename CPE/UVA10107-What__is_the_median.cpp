#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int num = 0, out = 0;
    int s[10001];

    while(scanf("%d", &s[num++]) != EOF){
        for(int i=0; i<num; ++i)
        {
            if(s[i] < s[num-1])
            {
                out = s[num-1];
                for(int j=num-1; j>i; --j)
                {
                    s[j] = s[j-1];
                }
                s[i] = out;
            }
            
        }
        for(int i=0; i<num; ++i){
            cout << s[i] << " ";
        }
        cout << endl;
        if(num%2)
        {
            cout << s[num/2] << endl;
        }
        else 
        {
            cout << (s[num/2] + s[num/2-1]) / 2 << endl;
        }
    }

        

    return 0;
}