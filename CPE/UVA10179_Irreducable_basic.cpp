#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int used[50000];
    int prim[50000];
    int fac[30];

    for(int i=0; i<50000; ++i) // initial array
        used[i] = 0;

    int save = 0;
    for(int i=2; i<50000; ++i)
    {
        if(!used[i])
        {
            prim[save++] = i; // store prime number
            for(int j=2*i; j<50000; j+=i)
                used[j] = 1;
        }
    }

    int n;
    while(cin >> n && n)
    {
        int cnt = 0, base = 0, m = n;
        while(n > 1 && base < save)
        {
            if(n%prim[base] == 0)
            {
                fac[cnt++] = prim[base]; // store any prime number
                while(n%prim[base] == 0) // divide any prime number
                {
                    n /= prim[base];
                }
            }
            base++;
        }
        if(n > 1) fac[cnt++] = n;

        long long int ans = m;
        for(int i=0; i<cnt; ++i)
        {
            ans = ans/fac[i]*(fac[i]-1); // divide 
        }
        cout << ans << endl;
    }
    return 0;
}