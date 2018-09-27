#include <iostream>
#include <cstdio>

using namespace std;

int main(){

int money, temp = 0, ten = 10, five = 5, one = 1;
cin >> money;
for(int i = 0; ten * i <= money; i++)
{ // how many 10
    temp = money - ten * i;
    for(int h = 0; five * h <= temp; h++)
    {// how many 5
        one = temp - five * h;
        cout << "10:" << i << " 5:" << h << " 1:" << one << endl;
    }
}
/*char str[] = "Hello world";
char *p = str;
short a; 
int b; 
long c; 
float d; 
double e;

printf("%d\n", sizeof(str));
printf("%d\n", sizeof(*p));
printf("%d\n", sizeof(p));
printf("%d\n", sizeof(a));
printf("%d\n", sizeof(b));
printf("%d\n", sizeof(c));
printf("%d\n", sizeof(d));
printf("%d\n", sizeof(e));*/

return 0;
}
