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

    for(i =1; c != '\n'; i++) // cin a num to array and the next if \n break
    {

        scanf("%d%c", &A[i], &c);
    }
    c = 0; // for array b cnt

    for(j = 0; c != '\n'; j++)
    {
        scanf("%d%c", &B[j], &c);
    }

    sort(A, A + i); // sort for find set
    sort(B, B + j);

    int match = 0;

    for(int a=0, b=0; a<i && b<j;) // condition for anyone already used
    {
        if(B[b] == A[a]) // if match, move both
        {
            match++;
            a++;
            b++;
            continue; // no need for other check
        }

        if(A[a] > B[b]) // b catch up a
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
