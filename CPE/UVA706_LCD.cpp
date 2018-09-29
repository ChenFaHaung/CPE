#include <iostream>
#include <string.h>
#include <cstdio>

using namespace std;
// hardcode of LCD display
int h[] = {1, 0, 1, 1, 0, 1, 1, 1, 1, 1};
int lh[] = {1, 0, 0, 0, 1, 1, 1, 0, 1, 1};
int rh[] = {1, 1, 1, 1, 1, 0, 0, 1, 1, 1};
int m[] = {0, 0, 1, 1, 1, 1, 1, 0, 1, 1};
int lb[] = {1, 0, 1, 0, 0, 0, 1, 0, 1, 0};
int rb[] = {1, 1, 0, 1, 1, 1, 1, 1, 1, 1};
int bm[] = {1, 0, 1, 1, 0, 1, 1, 0, 1, 1};

int main()
{
    int a;
    char b[10], s[10];
    while(cin >> a >> b)
    {
        if(a==0 && b[0]=='0')
            break;
        for(int i=0; i<strlen(b); ++i)
        {
            s[i] = b[i] - '0';
        }

        for(int i=0; i<strlen(b); ++i)
        {
            if(i)
            {
                cout << " ";
            }
            cout << " ";
            for(int j=0; j<a; ++j)
            {
                if(h[s[i]] == 1)
                    cout << '-';
                else 
                    cout << " ";
            }
            cout << " ";
        }
        cout << endl;

        for(int k = 0; k < a; k++) 
        {
            for(int i = 0; i < strlen(b); i++) 
            {
                if(i) printf(" ");
                printf("%c", lh[s[i]] == 1 ? '|' : ' ');
                for(int j = 0; j < a; j++)
                    printf(" ");
                printf("%c", rh[s[i]] == 1 ? '|' : ' ');
            }
            printf("\n");
        }

        for(int i=0; i<strlen(b); ++i)
        {
            if(i)
            {
                cout << " ";
            }
            cout << " ";
            for(int j=0; j<a; ++j)
            {
                if(m[s[i]] == 1)
                    cout << '-';
                else 
                    cout << " ";
            }
            cout << " ";
        }
        cout << endl;

        for(int k = 0; k < a; k++) 
        {
            for(int i = 0; i < strlen(b); i++) 
            {
                if(i) printf(" ");
                if(lb[s[i]] == 1){cout << '|';}
                else{cout << ' ';}
                for(int j = 0; j < a; j++){printf(" ");}
                printf("%c", rb[s[i]] == 1 ? '|' : ' ');
            }
            printf("\n");
        }

        for(int i=0; i<strlen(b); ++i)
        {
            if(i)
            {
                cout << " ";
            }
            cout << " ";
            for(int j=0; j<a; ++j)
            {
                if(bm[s[i]] == 1)
                    cout << '-';
                else 
                    cout << " ";
            }
            cout << " ";
        }
        cout << endl << endl;
    }
    return 0;

}