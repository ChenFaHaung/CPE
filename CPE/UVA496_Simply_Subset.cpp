#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main(void){

int A[1000], B[1000], i, j;

char c;

while(scanf("%d%c", &A[0], &c) == 2)
{

    for(i =1; c != '\n'; i++)
    {

        scanf("%d%c", &A[i], &c);
    }
    c = 0;

    for(j = 0; c != '\n'; j++)
    {
        scanf("%d%c", &B[j], &c);
    }

    sort(A, A + i);
    sort(B, B + j);

    int match = 0;

    for(int a=0, b=0; a<i && b<j;)
    {
        if(B[b] == A[a])
        {
            match++;
            a++;
            b++;
            continue;
        }
        if(A[a] > B[b])
        {
            b++;
        }
        else
        {
            a++;
        }
    }
    if(match ==0)
    {
        cout << "A and B are disjoint" << endl;
    }
    else if(match == i && match == j)
    {
        cout << "A equals B" << endl;
    }
    else if(match == i)
    {
        cout << "A is proper subset of B\n";
    }
    else if(match == j)
    {
        cout << "B is proper subset of A\n";
    }
    else
    {
        cout << "I'm confused!\n";
    }

}

return 0;
}
